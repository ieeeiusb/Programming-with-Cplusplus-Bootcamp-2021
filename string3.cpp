#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    cout << "The initial string is: " << str << endl;

    str.push_back('s');

    cout << "The string after push_back operation is: ";
    cout << str << endl;


    str.pop_back();

    cout << "The string after pop_back operation is: ";
    cout << str << endl;

    return 0;
}
