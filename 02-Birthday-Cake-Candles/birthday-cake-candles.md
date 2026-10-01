# Birthday Cake Candles

## Problem Summary

Given an array representing the heights of candles, find how many candles have the maximum height.

## Approach

The solution scans the array once while keeping track of the maximum candle height and the number of candles having that height.

Whenever a taller candle is found, the maximum height is updated and the count is reset to 1. If another candle has the same maximum height, the count is increased.

## Steps

1. Read the number of candles.
2. Store the candle heights.
3. Set the first candle as the initial maximum height.
4. Traverse all candles.
5. If a taller candle is found, update the maximum height and reset the count.
6. If a candle equals the maximum height, increase the count.
7. Print the final count.

## Complexity Analysis

**Time Complexity:** O(n), where n is the number of candles.

**Auxiliary Space:** O(n) for storing the candle heights.

## Why This Approach Is Efficient

The array is traversed only once, so the maximum height and its frequency are found efficiently without repeatedly sorting or scanning the array.

## Alternative Approach

The array could first be sorted and then the fr
