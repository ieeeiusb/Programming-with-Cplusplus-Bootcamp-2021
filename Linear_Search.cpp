#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ara[30], num, i;
    cout << "How many elements would you like to enter: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "\nEnter the elements number (" << i << "): ";
        cin >> ara[i];
    }
    cout << "\nEnter the number that you want to search: ";
    cin >> num;

    for(i = 0; i < n; i++)
    {
        if(ara[i] == num)
        {
            cout << endl << num << " is present at location " << i << endl;
            break;
        }
    }
    if(i == n)
        cout << endl << num << " is not present in the array." << endl;
    return 0;
}
