# Binary Search – Intro to Tutorial Challenges

## Problem Summary

Given a sorted array and a target value, find the zero-based index of the target value using binary search.

## Approach

Binary search repeatedly divides the search range into two halves. The middle element is compared with the target value. Based on the comparison, either the left or right half is discarded.

## Steps

1. Read the target value and array size.
2. Read the sorted array.
3. Set `left` to the first index and `right` to the last index.
4. Calculate the middle index.
5. If the middle element equals the target, return its index.
6. If the middle element is smaller, search the right half.
7. If the middle element is larger, search the left half.
8. Continue until the target is found.

## Complexity Analysis

**Time Complexity:** O(log n)

**Auxiliary Space:** O(1)

## Why This Approach Is Efficient

Because the array is sorted, half of the remaining elements can be eliminated after every comparison. This makes binary search much faster than a linear search for large arrays.

## Alternative Approach

A linear search could check every element one by one. Its time complexity is O(n), while binary search takes O(log n), making binary search more efficient for a sorted array.

## HackerRank Challenge

Intro to Tutorial Challenges — Hacke
