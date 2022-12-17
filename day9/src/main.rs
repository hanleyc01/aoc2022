#![allow(unused, dead_code)]

use std::io::{Read, Error};
use std::fs::File;

use array2d::{Array2D, Error as ArrayError};

const LENGTH: usize = 50;
const HEIGHT: usize = 50;

#[derive(Debug, PartialEq, Eq, Clone, Copy)]
enum Direction {
    Right,
    Up,
    Down,
    Left,
}

#[derive(Debug, PartialEq, Eq, Clone, Copy)]
enum Element {
    H,
    T,
    N
}

impl Direction {
    fn from_string(s: String) -> Option<Self> {
        let s = s.to_lowercase();
        if &s == "r" {
            Some(Self::Right)
        } else if &s == "u" {
            Some(Self::Up)
        } else if &s == "d" {
            Some(Self::Down) 
        } else if &s == "l" {
            Some(Self::Left)
        } else {
            None
        }
    }
}

fn get_tail_visits() -> i32 { 0 }

fn get_buf() -> String {
    let mut f = File::open("test.txt").unwrap();
    let mut buf = String::new();
    f.read_to_string(&mut buf);
    buf
}

fn get_pairs(buf: String) -> Vec<(String, i32)> {
    let mut pairs = Vec::new();
    buf.split('\n').for_each(|x| {
        let mut split = x.split_whitespace();
        let left = split.next();
        let right = split.next();
        if let (Some(s), Some(n)) = (left, right) {
            pairs.push((s.to_string(), n.parse::<i32>().unwrap()))
        }
    });
    pairs
}

fn get_directions(pairs: Vec<(String, i32)>) -> Vec<(Direction, i32)> {
    let mut direcs = Vec::new();
    pairs.into_iter().for_each(|(x,y)| { direcs.push((Direction::from_string(x).unwrap(),y)) });
    direcs
}

fn distance(p1: (usize, usize), p2: (usize, usize)) -> (isize, isize) {
    ((p1.0 as isize - p2.0 as isize), (p1.1 as isize - p2.1 as isize))
}

type UPoint = (usize, usize);
type IPoint = (isize, isize);

/// Returns the distance between two points as a tuple, rather than a scalar
fn get_changes(dist: IPoint, p1: UPoint, p2: UPoint) -> (UPoint, UPoint) {
    println!("H: {:?}", &p1);
    println!("T: {:?}", &p2);
    println!("abs distance in point: ({}, {})", dist.0.abs(), dist.1.abs());
    
    let mut t_pos = p2;

    let mut x_1 = dist.0 < 1;
    let mut y_1 = dist.1 < 1;

    if !x_1 {
        while !x_1 {
            t_pos.0 += 1;
            let d = distance(p1, t_pos);
            x_1 = d.0 < 1;
        }
    } else if !y_1 {
        while !y_1 {
            t_pos.1 += 1;
            let d = distance(p1, t_pos);
            y_1 = d.1 < 1;
        }
    }

    (p1, t_pos)
}

fn process_directions(direcs: Vec<(Direction, i32)>) -> i32 {
    let mut unique_cell = 0;
    let mut curr_pos  = (LENGTH / 2, HEIGHT / 2);
    let mut t_pos = curr_pos;
    let mut board = Array2D::filled_with(Element::N,LENGTH,HEIGHT);
    board[(0,0)] = Element::H;
    for (d, n) in direcs {
        for c in 0..n {
            match d {
                Direction::Up => {
                    if board[(curr_pos)] != Element::T {
                        board[(curr_pos)] = Element::N;
                    }
                    curr_pos.1 += 1;
                    let distance = distance(curr_pos, t_pos);
                    (curr_pos, t_pos) = get_changes(distance, curr_pos, t_pos);
                    board[(t_pos)] = Element::T;
                    board[(curr_pos)] = Element::H;
                },
                Direction::Down => {
                    if board[(curr_pos)] != Element::T {
                        board[(curr_pos)] = Element::N;
                    }
                    board[(curr_pos)] = Element::N;
                    curr_pos.1 -= 1;
                    let distance = distance(curr_pos, t_pos);
                    (curr_pos, t_pos) = get_changes(distance, curr_pos, t_pos);
                    board[(t_pos)] = Element::T;
                    board[(curr_pos)] = Element::H;
                },
                Direction::Left => {
                    if board[(curr_pos)] != Element::T {
                        board[(curr_pos)] = Element::N;
                    }
                    board[(curr_pos)] = Element::N;
                    curr_pos.0 -= 1;
                    let distance = distance(curr_pos, t_pos);
                    (curr_pos, t_pos) = get_changes(distance, curr_pos, t_pos);
                    board[(t_pos)] = Element::T;
                    board[(curr_pos)] = Element::H;
                },
                Direction::Right => {
                    if board[(curr_pos)] != Element::T {
                        board[(curr_pos)] = Element::N;
                    }
                    board[(curr_pos)] = Element::N;
                    curr_pos.0 += 1;
                    let distance = distance(curr_pos, t_pos);
                    (curr_pos, t_pos) = get_changes(distance, curr_pos, t_pos);
                    board[(t_pos)] = Element::T;
                    board[(curr_pos)] = Element::H;
                }
            }
        }
    }
    unique_cell
}

fn main() {
    let buf = get_buf();

    let pairs = get_directions(get_pairs(buf));

    let number_of_tail_visits = process_directions(pairs);
    let test_goal = 13;
    //assert_eq!(number_of_tail_visits, test_goal);
}
