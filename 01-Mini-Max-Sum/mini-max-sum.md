# Mini-Max Sum

## Problem Summary

Given five positive integers, calculate the minimum sum and maximum sum that can be obtained by adding exactly four of the five integers.

## Approach

The solution calculates the total sum of all five numbers and identifies the minimum and maximum values.

* Minimum sum = Total sum − Maximum value
* Maximum sum = Total sum − Minimum value

This avoids calculating all possible combinations.

## Steps

1. Read the five integers.
2. Calculate the total sum.
3. Find the minimum value.
4. Find the maximum value.
5. Subtract the maximum value from the total to get the minimum sum.
6. Subtract the minimum value from the total to get the maximum sum.
7. Print both sums.

## Complexity Analysis

**Time Complexity:** O(n), where n = 5.

**Auxiliary Space:** O(n) for storing the input array.

## Why This Approach Is Efficient

Instead of calculating the sum of every possible group of four numbers, the solution calculates the total once and removes either the minimum or maximum value. This makes the solution simple and efficient.

## Alternative Approach

Another approach is to calculate the sum of every possible group of four numbers and then find the minimum and maximum among those sums. However, the total-sum approach requires fewer calculations.

## HackerRank Challenge

Introductory algorithm problem focused on finding minimum and maximum sums efficiently.
