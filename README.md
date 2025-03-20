 Gauss-Jordan Elimination for Solving Linear Equations

## Description

This C++ program implements the **Gauss-Jordan Elimination** method to solve a system of linear equations. The program reads an augmented matrix from a file, performs row operations to transform the matrix into **Reduced Row Echelon Form (RREF)**, and then displays the solutions.

### Features:
- Reads a 3x4 augmented matrix from a file.
- Displays the matrix in a human-readable format.
- Performs Gauss-Jordan elimination to find the solution to the system of equations.
- Handles division by zero and singular matrices by detecting errors.

---

## 📊 **Sample Output**

### 🎯 **Input File (`matrix.dat`):**

2 1 -1 8 -3 -1 2 -11 -2 1 2 -3

yaml
Copy
Edit

---

### ⚡️ **Execution:**

```bash
g++ gauss_jordan.cpp -o gauss_jordan
./gauss_jordan
📚 Program Output:
markdown
Copy
Edit
Gauss-Jordan Elimination Solver
---------------------------------------------------------------------------
Please Enter the filename containing the augmented matrix: matrix.dat

Original Augmented Matrix:
      2       1      -1       8 
     -3      -1       2     -11 
     -2       1       2      -3 

After Applying Gauss-Jordan Elimination (RREF Form):
      1       0       0       2 
      0       1       0       3 
      0       0       1      -1 

Solution:
x1 = 2
x2 = 3
x3 = -1

Simulation ended. Thank you!
---------------------------------------------------------------------------
