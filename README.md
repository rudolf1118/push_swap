# Push Swap

> A sorting algorithm challenge from the 42 (Yerevan) curriculum using stacks and limited operations.

## 📚 Overview

**Push Swap** is a sorting algorithm implementation project from the core curriculum of 42 Terevan. The task is to write a C program that sorts a list of integers in ascending order — using only **two stacks** (`a` and `b`) and a restricted set of **operations** (`push`, `swap`, `rotate`, `reverse rotate`).

The challenge emphasizes algorithm optimization, complexity analysis, and data structure implementation in a constrained environment.

## ⚙️ How It Works

You provide the program with an unsorted list of integers as command-line arguments. The program then outputs the most efficient (shortest) possible sequence of operations needed to sort the numbers.

Example:

```bash
./push_swap 3 2 1
```

Output:

```
sa
rra
```

## 🧠 My Approach

This repository contains my full implementation of `push_swap`, including:

* 🧼 **Custom sorting logic** optimized for different input sizes
* ⚙️ **Efficient stack manipulation** using linked lists
* 🔧 **Input validation** (duplicate checking, integer overflow, etc.)
* 📈 **Algorithmic choices** based on input size:

  * Hardcoded solutions for 3–5 elements
  * Radix sort for large inputs (efficient and predictable)

## ✅ Features

* Input parsing and validation
* Custom memory management
* Optimized command output
* Modular structure with reusable components
* Benchmarking tools (optional)

## 📉 Limitations

* Performance may vary based on the chosen sorting strategy
* Heavily optimized for performance, not readability
* Doesn't handle non-integer input (by design)

## 💡 Tips for 42 Students

* Start small — understand how the operations affect the stacks
* Implement a checker to validate your logic step-by-step
* Write helper functions for common patterns
* Optimize only after your base version works
* Visualize your stack transformations — it helps a lot!

## 📝 Usage

```bash
make
./push_swap 2 1 3 6 5 8
```
## 👨‍💻 Author

Made with patience, bugs, and eventual joy by a 42 student.
Feel free to explore, learn, and contribute.
