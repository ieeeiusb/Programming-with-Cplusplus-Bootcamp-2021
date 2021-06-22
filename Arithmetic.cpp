#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * *=
 * /=
 * %
 * %=
 * Precedence
*/

/// Take large numbers of seconds and convert it to hours, minutes and seconds
/// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iteration (use mod % operator)

int main()
{
    double value1 = (double) 7/2;
    cout << value1 << endl;

    int value2 = (int) 7.3;
    cout << value2 << endl;

    int value3 = 8;
    value3 += 1; /// value3 = valu3 + 1 or value3++
    cout << value3 << endl;

    int value4 = 10;
    value4 /= 5; /// value4 = value4 / 5
    cout << value4 << endl;

    double equation = (5.3 / 4) + (2 * 6);
    cout << equation << endl;
    double equation2 = ((5 / 4) % 2) + (2.3 * 6); /// 5 / 4 % 2 + 2.3 * 6 -> Don't do this
    cout << equation2 << endl;

    int number1 = 7, number2 = 5;
    int result = 7 % 5;
    cout << result << endl;
    return 0;
}
