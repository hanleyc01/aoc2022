module Main where

main :: IO ()
main = do
  contents <- readFile "test.txt"
  print $ lines contents


