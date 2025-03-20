
#include <iostream>
#include <fstream>
#include <cassert> 
#include <iomanip>
using namespace std;

// Global Variables
const int ROWS = 3;  
const int COLS = 4; 

//Prototypes
bool readMatrixFromFile(const string &filename, double matrix[][COLS]);
void displayMatrix(double matrix[][COLS]);
void gaussJordanElimination(double matrix[][COLS]);

int main() {
    string fileName;
    double augMatrix[ROWS][COLS];

    cout << "Gauss-Jordan Elimination Solver" << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "Please Enter the filename containing the augmented matrix: ";
    cin >> fileName; 

    // Read matrix from file
    if (!readMatrixFromFile(fileName, augMatrix)) {
        cerr << "Error: Unable to open file or read matrix!" << endl;
        return 1;
    }

    // Display original matrix
    cout << "\nOriginal Augmented Matrix:\n";
    displayMatrix(augMatrix);

    // Apply GaussJordan Elimination
    gaussJordanElimination(augMatrix);

    // Display RREF matrix
    cout << "\nAfter Applying Gauss-Jordan Elimination (RREF Form):\n";
    displayMatrix(augMatrix);

    // Display solutions
    cout << "\nSolution:\n";
    for (int i = 0; i < ROWS; i++) {
        cout << "x" << (i + 1) << " = " << augMatrix[i][COLS - 1] << endl;
    }

    cout << "\nSimulation ended. Thank you!\n";
    cout << "---------------------------------------------------------------------------" << endl;

    return 0;
}

//read a 3x4 augmented matrix from file
bool readMatrixFromFile(const string &filename, double matrix[][COLS]) {
    ifstream file;  
    file.open(filename);
    
    if (!file) {
        cerr << "Error: Unable to open file!" << endl;
        return false;
    }

    // Read matrix from file and store in 2D array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            file >> matrix[i][j];
        }
    }

    file.close();  // Close file
    return true;
}

// Function to display the matrix with proper formatting
void displayMatrix(double matrix[][COLS]) { 
    cout << fixed;                  
    cout << setprecision(0);  //make it no decimal place 
    
    for (int i = 0; i < ROWS; i++) { 
        for (int j = 0; j < COLS; j++) {
            cout << setw(6) << matrix[i][j]; //space it 6 to the right 
        }
        cout << endl;
    }
}

// Function to perform Gauss-Jordan Elimination
void gaussJordanElimination(double matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        // Normalize pivot row
        double divisor = matrix[i][i];
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] /= divisor;
        }

        // Eliminate other entries in the column
        for (int j = 0; j < ROWS; j++) {
            if (j != i) {
                double multiplier = -matrix[j][i];
                for (int k = 0; k < COLS; k++) {
                    matrix[j][k] += multiplier * matrix[i][k];
                }
            }
        }
    }
}
