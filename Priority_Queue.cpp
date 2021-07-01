#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int> pq;
    int ara[] = {10, 5, -10, 0, 1, 3, 7, 4};
    int n = 8;
    for(int i = 0; i < n; i++)
        pq.push(ara[i]);
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    cout << "==============================" << endl;

    /// 10 7 5 4 3 1 0 -10

    /// Max Heap & Min Heap

    cout << "Max Heap" << endl;
    for(int i = 0; i < n; i++)
        pq.push(ara[i]);
    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    cout << "Min Heap" << endl;
    for(int i = 0; i < n; i++)
        pq.push(-ara[i]);
    while(!pq.empty())
    {
        cout << -pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
