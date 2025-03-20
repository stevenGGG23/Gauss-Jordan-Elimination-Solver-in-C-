# Gauss-Jordan-Elimination-Solver-in-C- 

This project implements a Gauss-Jordan Elimination algorithm in C++ to solve systems of linear equations given in augmented matrix form. The program reads a 3x4 matrix from a file, processes it into Reduced Row Echelon Form (RREF), and displays the solution.  

✅ Reads a 3x4 augmented matrix from a file using C++ file stream operations.
✅ Applies Gauss-Jordan Elimination to convert the matrix into RREF.
✅ Displays the matrix and solution with proper formatting.
✅ Handles singular matrices (division by zero) and checks for inconsistent or infinite solutions.
✅ Well-formatted output with matrices skewed to the right by 7 spaces for better readability.  

Output: 

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
