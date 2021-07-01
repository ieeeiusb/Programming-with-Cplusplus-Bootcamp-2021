#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> deq;
    deq.push_front(10);
    deq.push_back(7);
    deq.push_back(6);
    deq.push_front(9);

    /// 9 10 7 6

    cout << deq.front() << endl;
    cout << deq.back() << endl;

    deq.pop_front();
    deq.pop_back();
    cout << endl;

    cout << "================================" << endl;
    cout << endl;

    cout << deq.front() << endl;
    cout << deq.back() << endl;

    cout << deq.size() << endl;
    deq.empty();

    return 0;
}
