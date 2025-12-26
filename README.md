# Algorithms Design and Analysis Project  
## Reducing Dishes Problem

---

## 📌 Project Overview
This project solves the **Reducing Dishes Problem**, where each dish has a satisfaction value (negative, zero, or positive).  
Each dish takes one unit of time, and the goal is to select and order dishes to **maximize total satisfaction**.

---

## 🎯 Objectives
- Compare **Naive** and **Optimized** solutions.
- Analyze algorithms using **Big-O notation**.
- Evaluate performance using **empirical analysis**.

---

## 🧠 Algorithms

### Naive Solution
- Tries multiple cooking orders after sorting.
- **Time Complexity:** `O(n²)`
- **Space Complexity:** `O(1)`

### Optimized Solution (Greedy)
- Adds dishes only if they increase total satisfaction.
- **Time Complexity:** `O(n log n)`
- **Space Complexity:** `O(1)`

---

## 📊 Empirical Results

| Input Size | Naive | Optimized |
|-----------|-------|-----------|
| Small     | ~0 ms | ~0.01 ms  |
| Medium    | ~0.7 ms | ~0.03 ms |
| Large     | ~1.1 ms | ~0.09 ms |

---

## 📁 Project Files


Algorithms-Design-Project
├── Report.docx
├── NaiveSolution.cpp
├── OptimizedSolution.cpp
└── README.md

---
## Team members 
Abdallah ahmed mohamed abdallah ,
abdelrhman mohamed hassan ibrahim, 
Amr ahmed elsayed mohamed ,
Abdelrhman Mohammed Ibrahim Aboalata ,
Abdelrhman mohsen mohamed mohamed ,

---

## ⚖️ Conclusion
The optimized greedy approach is more efficient than the naive solution in both theoretical and practical performance.

---
