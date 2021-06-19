#include <iostream>
using namespace std;

int main()
{
    /// data_type array_name[row_size][column_size];

    /// Declaration:
    int first_matrix[3][4];


    /// Number of elements = row * column;

    /// How we can input an 2 Dimensional Array;

    cout << "Enter the elements of the matrix: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            cout << "First Matrix [" << row << "] [" << column << "]: ";
            cin >> first_matrix[row][column];
        }
    }

    /// 2D Array printing/Output

    cout << endl;
    cout << "=====================================" << endl;
    cout << endl;

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            cout << first_matrix[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}
