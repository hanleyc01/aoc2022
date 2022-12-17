import Data.Maybe
import Data.List
import qualified Data.Set as S
import Data.Char

main = do
  contents <- readFile "data.text"
  print 
    $ sum
    $ concat
    $ map (map priority . unique)
    $ map (\x -> intersect3 (x !! 0) (x !! 1) (x !! 2)) $ take3 (lines contents)

take3 :: [String] -> [[String]]
take3 [] = []
take3 [x] = error "Need three elements"
take3 [x,y] = error "Need three elements"
take3 (x : y : z : zs) = 
  [x,y,z] : take3 zs

intersect3 :: String -> String -> String -> String
intersect3 xs ys zs = [r | r <- xs, r `elem` xs && r `elem` ys && r `elem` zs ]

priority c =
  if isUpper c 
    then fromEnum c - 38
    else fromEnum c - 96

unique = S.toList . S.fromList

splitHalf [] = Nothing
splitHalf xs = Just $ splitAt (length xs `div` 2) xs

