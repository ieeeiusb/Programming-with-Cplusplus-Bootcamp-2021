#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;
    st.push(10);
    st.push(3);
    st.push(8);
    st.push(5);
    st.push(7);
    st.push(9);

    /// 9 7 5 8 3 10

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}
