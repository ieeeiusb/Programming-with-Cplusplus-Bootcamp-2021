#include <bits/stdc++.h>
using namespace std;

int main()
{
    set < int > sss;
    sss.insert(100);
    int ara[] = {20, 28, 24, 25, -20, 28, 9, 3, 2, 1, 0, -5, -4, 39, 89};
    int n = 15;
    for(int i = 0; i < n; i++)
        sss.insert(ara[i]);
    cout << sss.size() << endl;
    set <int> :: iterator it;
    for(it = sss.begin(); it != sss.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    sss.erase(-5);
    cout << "After Erasing : " << endl;
    for(it = sss.begin(); it != sss.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    sss.clear();

    return 0;
}
