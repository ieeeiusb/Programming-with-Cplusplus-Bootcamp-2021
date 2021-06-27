#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.length();

    string reverseString;

    for(int i = len - 1; i >= 0; i--)
        reverseString.push_back(str[i]);

    cout << reverseString << endl;

    return 0;
}
