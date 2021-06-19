#include <iostream>
using namespace std;

int main()
{
    /// Matrix Multiplication
    /// Condition: Column of First Matrix is always equal to row of second

    int first[20][20], second[20][20], result[20][20], row1, row2, column1, column2, sum = 0;
    cout << "Enter the row of first matrix: ";
    cin >> row1;
    cout << "Enter the column of first matrix: ";
    cin >> column1;
    cout << "Enter the row of second matrix: ";
    cin >> row2;
    cout << "Enter the column of second matrix: ";
    cin >> column2;

    while(column1 != row2)
    {
        cout << "Error!!! Multiplication is not possible.";
        cout << "Column of first matrix is not equal to row of second.";
        cout << "Enter the row of first matrix: ";
        cin >> row1;
        cout << "Enter the column of first matrix: ";
        cin >> column1;
        cout << "Enter the row of second matrix: ";
        cin >> row2;
        cout << "Enter the column of second matrix: ";
        cin >> column2;
    }

    /// taking input for first matrix
    cout << "Enter the elements for first matrix: " << endl;
    for (int row = 0; row < row1; row++) {
        for (int column = 0; column < column1; column++) {
            cout << "First Matrix [" << row << "] [" << column << "]: ";
            cin >> first[row][column];
        }
        cout << endl;
    }

    /// taking input for second matrix
    cout << "Enter the elements for second matrix: " << endl;
    for(int row = 0; row < row2; row++) {
        for(int column = 0; column < column2; column++) {
            cout << "Second Matrix [" << row << "] [" << column << "]: ";
            cin >> second[row][column];
        }
        cout << endl;
    }

    /// Matrix Multiplication
    /// First Row, First Column


    /// Multiplying Two Matrix

    /// sum = first[0][0] * second[0][0] + first[0][1] * second[1][0];

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < column2; j++) {
            for(int k = 0; k < column1; k++) {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    /// printing result
    for(int row = 0; row < row1; row++) {
        for(int column = 0; column < column2; column++) {
            cout << result[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}
