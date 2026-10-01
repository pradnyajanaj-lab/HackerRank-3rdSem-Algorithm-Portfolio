# Mark and Toys

## Problem Summary

Given the prices of different toys and a fixed amount of money, find the maximum number of toys that can be purchased without exceeding the available budget.

## Approach

The solution first sorts the toy prices in ascending order. It then purchases the cheapest toys one by one while the total cost remains within the given budget.

## Steps

1. Read the number of toys and the available budget.
2. Read all toy prices.
3. Sort the prices in ascending order.
4. Start with a total cost of zero and a count of zero.
5. Add each cheapest toy while the total cost does not exceed the budget.
6. Stop when the next toy cannot be purchased.
7. Return the number of toys purchased.

## Complexity Analysis

**Time Complexity:** O(n log n), due to sorting the prices.

**Auxiliary Space:** O(1), excluding the input array.

## Why This Approach Is Efficient

Buying the cheapest toys first maximizes the number of toys that can be purchased within the available budget. Sorting makes it possible to process prices from the smallest to the largest.

## Alternative Approach

A selection-based approach could repeatedly find the cheapest remaining toy without sorting the entire array. However, repeatedly searching for the minimum can take O(n²) time, so sorting is more efficient.

## HackerRank Challenge

Mark and Toys — HackerRank Problem Solving.
