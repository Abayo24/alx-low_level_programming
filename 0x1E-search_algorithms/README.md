# 0x1E. C - Search Algorithms

## Description

This project covers various search algorithms in C, including linear search and binary search. It aims to provide an understanding of these algorithms, their implementation, and their complexities.

## Learning Objectives

At the end of this project, you should be able to explain:

- What is a search algorithm
- What is a linear search
- What is a binary search
- The best search algorithm to use depending on your needs

## Requirements

- **Editors**: `vi`, `vim`, `emacs`
- **Compilation**: All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Style**: Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- **Restrictions**: 
  - No global variables
  - No more than 5 functions per file
  - Only allowed to use the `printf` function of the standard library
- **Prototypes**: The prototypes of all functions should be included in your header file called `search_algos.h`
- **Header files**: All your header files should be include guarded

## Files

### Mandatory Tasks

#### 0. Linear search

- **File**: `0-linear.c`
- **Prototype**: `int linear_search(int *array, size_t size, int value);`
- **Description**: Searches for a value in an array of integers using the Linear search algorithm.
- **Requirements**:
  - Return the first index where the value is located
  - If the value is not present or if the array is NULL, return -1
  - Print each value checked during the search process

#### 1. Binary search

- **File**: `1-binary.c`
- **Prototype**: `int binary_search(int *array, size_t size, int value);`
- **Description**: Searches for a value in a sorted array of integers using the Binary search algorithm.
- **Requirements**:
  - Assume that array will be sorted in ascending order
  - Assume that value won’t appear more than once in array
  - Return the index where the value is located
  - If the value is not present or if the array is NULL, return -1
  - Print the array being searched every time it changes

### Big O Notation

#### 2. Big O #0

- **File**: `2-O`
- **Description**: Write the time complexity (worst case) of a linear search in an array of size n.

#### 3. Big O #1

- **File**: `3-O`
- **Description**: Write the space complexity (worst case) of an iterative linear search algorithm in an array of size n.

#### 4. Big O #2

- **File**: `4-O`
- **Description**: Write the time complexity (worst case) of a binary search in an array of size n.

#### 5. Big O #3

- **File**: `5-O`
- **Description**: Write the space complexity (worst case) of a binary search in an array of size n.

#### 6. Big O #4

- **File**: `6-O`
- **Description**: Write the space complexity of this function / algorithm:
