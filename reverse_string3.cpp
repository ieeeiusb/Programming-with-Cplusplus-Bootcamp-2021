#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string reverseString = string(str.rbegin(), str.rend());

    cout << reverseString << endl;

    return 0;
}
