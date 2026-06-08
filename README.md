[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/G6xtdRX0)
# Assignment: Student Grade Analyzer

## 🎯 Objective

In this assignment, you will build a simple C program that calculates a student's total marks, average, grade, and pass/fail status.

You will also demonstrate proper GitHub workflow using branches, commits, and pull requests.

---

## ⏱ Duration

1 Hour

---

## 💻 Problem Statement

Write a C program that takes marks of a student in 3 subjects and calculates:

- Total Marks
- Average Marks
- Grade
- Pass / Fail Status

---

## 📥 Input

Your program should take input for:

- Mathematics (out of 100)
- Science (out of 100)
- English (out of 100)

---

## ⚙️ Processing Rules

### 1. Total and Average

```
Total = m1 + m2 + m3
Average = Total / 3.0
```

---

### 2. Grade System

| Average Range | Grade |
|---------------|------|
| 80 - 100 | A |
| 70 - 79 | B |
| 60 - 69 | C |
| 50 - 59 | D |
| Below 50 | F |

---

### 3. Pass / Fail Rule (IMPORTANT)

A student is:

- ✅ PASS → if ALL subjects are ≥ 40
- ❌ FAIL → if ANY subject is < 40

> Note: Even if average is high, a single subject below 40 means FAIL.

---

## 📤 Output Format

Example output:

```
Total: 240
Average: 80.00
Grade: A
Result: PASS
```

---

## 🧑‍💻 GitHub Workflow Requirements

You must follow proper Git workflow:

---

## 📂 Expected Repository Structure
Do not include any additional files in the repository.
```
.
├── main.c
└── README.md
```

---

## ⭐ Bonus (Optional)

- Add highest subject mark display
- Add distinction rule (Average ≥ 85 AND all subjects ≥ 80)
- Improve output formatting

---

**