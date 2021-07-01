#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// first in, first out
    queue <int> que;
    que.push(10);
    que.push(5);
    que.push(9);
    que.push(13);
    que.push(11);

    /// 10 5 9 13 11

    cout << que.front() << endl;

    cout << que.size() << endl;

    while(!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }
    return 0;
}
