#include<iostream>
#include<climits> // For INT_MIN
using namespace std;

// Function to print column-wise values of a 2D array
void printcol(int arr[][4], int row, int col) {
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to print the row index with the maximum sum
void printrow(int arr[][4], int row, int col) {
    int index = -1, sum = INT_MIN;
    for (int i = 0; i < row; i++) {
        int total = 0;
        for (int j = 0; j < col; j++) {
            total += arr[i][j];
        }
        if (total > sum) {
            sum = total;
            index = i;
        }
    }
    cout << "Row with the maximum sum is: " << index << endl;
}

// Function to print the sum of the primary and secondary diagonals
void printsumdig(int matrix[][3], int row, int col) {
    int first = 0;
    int sec = 0;
    
    // Sum of the primary diagonal
    int i = 0;
    while (i < row) {
        first += matrix[i][i];
        i++;
    }

    // Sum of the secondary diagonal
    i = 0;
    int j = col - 1;
    while (j >= 0) {
        sec += matrix[i][j];
        i++;
        j--;
    }

    cout << "Primary diagonal sum: " << first << endl;
    cout << "Secondary diagonal sum: " << sec << endl;
}

int main() {
    // Example 2D array (matrix)
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Print diagonal sums
    printsumdig(matrix, 3, 3);

    return 0;
}

