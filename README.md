# HackerRank 3rd Semester Algorithm Portfolio

## Student Information

* **Name:** Pradnya Janaj
* **USN / Student ID:** R25EF183
* **Semester:** 3rd Semester
* **Programming Language:** C++20
* **HackerRank Profile:** https://www.hackerrank.com/profile/pradnyajanaj
* **GitHub Repository:** https://github.com/pradnyajanaj-lab/HackerRank-3rdSem-Algorithm-Portfolio

## Introduction

This repository contains my HackerRank algorithm practice completed as part of my academic portfolio. The solutions are implemented in C++20 and demonstrate fundamental problem-solving techniques including array processing, searching, sorting, and greedy algorithms.

Each problem includes the solution code, an explanation of the approach, step-by-step logic, and time and space complexity analysis.

## Problems Completed

| No. | Problem                      | Algorithm / Technique | Time Complexity | Auxiliary Space |
| --- | ---------------------------- | --------------------- | --------------- | --------------- |
| 1   | Mini-Max Sum                 | Array Traversal       | O(n)            | O(n)            |
| 2   | Birthday Cake Candles        | Array Traversal       | O(n)            | O(n)            |
| 3   | Insertion Sort – Part 1      | Insertion Sort        | O(n)            | O(1)            |
| 4   | Intro to Tutorial Challenges | Binary Search         | O(log n)        | O(1)            |
| 5   | Mark and Toys                | Sorting + Greedy      | O(n log n)      | O(1)            |

## Problem 1 – Mini-Max Sum

**Approach:** Calculate the total sum of all five values and identify the minimum and maximum values. The minimum sum is obtained by excluding the maximum value, while the maximum sum is obtained by excluding the minimum value.

**Complexity:**

* Time: O(n)
* Auxiliary Space: O(n)

[View Solution](01-Mini-Max-Sum/mini-max-sum.cpp)
[View Documentation](01-Mini-Max-Sum/mini-max-sum.md)

## Problem 2 – Birthday Cake Candles

**Approach:** Traverse the candle heights while keeping track of the maximum height and the number of candles having that height.

**Complexity:**

* Time: O(n)
* Auxiliary Space: O(n)

[View Solution](02-Birthday-Cake-Candles/birthday-cake-candles.cpp)
[View Documentation](02-Birthday-Cake-Candles/birthday-cake-candles.md)

## Problem 3 – Insertion Sort – Part 1

**Approach:** The last element is treated as the value to insert into the already sorted portion of the array. Larger elements are shifted one position to the right until the correct position is found.

**Complexity:**

* Time: O(n) in the worst case
* Auxiliary Space: O(1)

[View Solution](03-Insertion-Sort-Part-1/insertion-sort-part-1.cpp)

[View Documentation](03-Insertion-Sort-Part-1/insertion-sort-part-1.md)

## Problem 4 – Intro to Tutorial Challenges

**Approach:** Use binary search on the sorted array. Compare the target value with the middle element and eliminate half of the remaining search space after each comparison.

**Complexity:**

* Time: O(log n)
* Auxiliary Space: O(1)

[View Solution](04-Binary-Search/binary-search.cpp)

[View Documentation](04-Binary-Search/binary-search.md)

## Problem 5 – Mark and Toys

**Approach:** Sort the toy prices in ascending order and purchase the cheapest toys first until the available budget is exhausted.

**Complexity:**

* Time: O(n log n)
* Auxiliary Space: O(1)

[View Solution](05-Mark-and-Toys/mark-and-toys.cpp)

[View Documentation](05-Mark-and-Toys/mark-and-toys.md)

## HackerRank Evidence

The following screenshots provide evidence of the accepted HackerRank submissions and the Problem Solving badge.

### 1. Mini-Max Sum

[View Accepted Submission](evidence/01-Mini-Max-Sum-Accepted.png)

### 2. Birthday Cake Candles

[View Accepted Submission](evidence/02-Birthday-Cake-Candles-Accepted.png)

### 3. Insertion Sort – Part 1

[View Accepted Submission](evidence/03-Insertion-Sort-Part-1-Accepted.png)

### 4. Binary Search – Intro to Tutorial Challenges

[View Accepted Submission](evidence/04-Binary-Search-Accepted.png)

### 5. Mark and Toys

[View Accepted Submission](evidence/05-Mark-and-Toys-Accepted.png)

### 6. HackerRank Problem Solving Badge

[View Badge Evidence](evidence/06-Problem-Solving-Badge.png)

## HackerRank Profile

[Visit HackerRank Profile](https://www.hackerrank.com/profile/pradnyajanaj)

## Learning Outcomes

Through these problems, I practiced array traversal, searching, sorting, insertion techniques, greedy problem solving, and algorithmic complexity analysis. The activity also helped me organize coding solutions and evidence in a GitHub portfolio.

## Conclusion

This portfolio demonstrates my practice with fundamental algorithms using C++20. The repository includes solution code, documentation, complexity analysis, and HackerRank submission evidence for all five required problems.
