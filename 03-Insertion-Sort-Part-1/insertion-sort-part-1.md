# Insertion Sort – Part 1

## Problem Summary

Given an array where the last element is the value to be inserted, place that value in its correct position in the already sorted portion of the array. The problem requires printing the array after each shift and after the final insertion.

## Approach

The solution starts from the element immediately before the value to be inserted. If that element is greater than the value, it is shifted one position to the right. This continues until the correct position for the value is found.

## Steps

1. Read the size of the array and its elements.
2. Store the last element as the value to be inserted.
3. Start comparing from the element before it.
4. Shift larger elements one position to the right.
5. Print the array after each shift.
6. Insert the value into its correct position.
7. Print the final array.

## Complexity Analysis

**Time Complexity:** O(n) in the worst case.

**Auxiliary Space:** O(1), excluding the input array.

## Why This Approach Is Efficient

Only the sorted portion of the array is scanned, and elements are shifted directly into their correct positions. No additional array is required.

## Alternative Approach

A general insertion sort algorithm could be used to sort the entire array. However, this problem only requires inserting the final element, so processing the complete array would perform unnecessary work.

## HackerRank Challenge

Insertion Sort – Part 1 — HackerRank Problem Solving.
