#include <bits/stdc++.h>
using namespace std;

void vectorDemo()
{
    vector < int > A = {11, 2, 3, 14};
    cout << A[1] << endl;

    sort(A.begin(), A.end()); /// O(NlogN)

    /// 2, 3, 11, 14

    bool present = binary_search(A.begin(), A.end(), 2); /// true
    bool present1 = binary_search(A.begin(), A.end(), 100); /// false

    cout << present << endl;

    A.push_back(100);
    /// 2, 3, 11, 14, 100

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);

    /// 2, 3, 11, 14, 100, 100, 100, 100, 100, 123

    /// LOWER BOUND is the first element greater than or equal to the given input
    /// UPPER BOUND is the first element strictly greater than the given input

    vector <int> :: iterator it = lower_bound(A.begin(), A.end(), 100);
    vector <int> :: iterator it1 = upper_bound(A.begin(), A.end(), 100);

    cout << *it << " " << *it1 << endl; /// *it = 100 & *it1 = 123
    cout << it1 - it << endl; /// 5

    vector <int> :: iterator it2;
    for(it2 = A.begin(); it2 != A.end(); it2++)
        cout << *it2 << " ";
    cout << endl;

    for(int &x : A) /// reference
        x++;
    for(int x : A)
        cout << x << " ";
    cout << endl;

}

void setDemo()
{
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x : s)
        cout << x << " ";
    cout << endl;

    /// -10 -1 1 2

    auto it = s.find(-1);
    if(it == s.end())
        cout << "Not Present" << endl;
    else
    {
        cout << "Present" << endl;
        cout << *it << endl;
    }

    auto it1 = s.upper_bound(-1);
    auto it2 = s.upper_bound(0);
    cout << *it1 << " " << *it2 << endl;

    auto it3 = s.upper_bound(2);
    if(it3 == s.end())
        cout << "oops! Sorry cant't find something like that." << endl;

}





















int main()
{
    setDemo();
    return 0;
}
