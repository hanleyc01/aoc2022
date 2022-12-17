{-# LANGUAGE LambdaCase #-}
import Data.Maybe
import Data.List
import qualified Data.Set as S
import Data.Char

main = do
  contents <- readFile "data.text"
  let x = map (unique . uncurry intersect . fromJust . splitHalf) $ lines contents
  print $ sum $ concat $ map (map priority) x

priority c =
  if isUpper c 
    then fromEnum c - 38
    else fromEnum c - 96

unique = S.toList . S.fromList

splitHalf [] = Nothing
splitHalf xs = Just $ splitAt (length xs `div` 2) xs
