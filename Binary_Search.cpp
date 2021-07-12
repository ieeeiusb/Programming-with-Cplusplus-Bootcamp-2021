#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ara[30], num, first, last, mid;
    cout << "How many elements would you like to enter: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element number: " << i + 1 << ": ";
        cin >> ara[i];
    }
    cout << "Enter the number that you want to search: ";
    cin >> num;
    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    while(first <= last)
    {
        if(ara[mid] < num)
        {
            first = mid + 1;
        }
        else if(ara[mid] == num)
        {
            cout << num << " found in the array at the location " << mid + 1 << "." << endl;
            break;
        }
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }
    if(first > last)
        cout << num << " is not found in the array." << endl;
    return 0;
}
