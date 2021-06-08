#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[10] = "IEEEIUSB ";
    char str2[30] = "Programming Bootcamp";
    char str3[40];
    int len;


    cout << "========================================" << endl;
    cout << "Size of str1 before concatenation: ";
    cout << sizeof(str1) << endl;
    cout << "========================================" << endl;

    cout << "========================================" << endl;
    cout << "Length of str1 before concatenation: ";
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;
    cout << "========================================" << endl;

    /// copy str1 into str3
    strcpy (str3, str2);
    cout << "strcpy (str3, str2): " << str3 << endl;

    /// concatenates str1 and str2
    strcat (str1, str2);
    cout << "strcat (str1, str2): " << str1 << endl;

    cout << "========================================" << endl;
    cout << "Size of str1 after concatenation: ";
    cout << sizeof(str1) << endl;
    cout << "========================================" << endl;

    /// total length of str1 after concatenation
    cout << "========================================" << endl;
    cout << "Length of str1 after concatenation: ";
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;
    cout << "========================================" << endl;

    return 0;
}
