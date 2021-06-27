/// Reversing a String
#include <bits/stdc++.h>
using namespace std;

void reverseString(string str) {
    for(int i = str.length() - 1; i > 0; i--)
        cout << str[i];
}

int main()
{
    string str;
    cin >> str;
    reverseString(str);
    return 0;
}
