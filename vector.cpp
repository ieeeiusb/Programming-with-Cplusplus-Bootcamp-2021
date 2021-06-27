#include <bits/stdc++.h>
using namespace std;

int arr[100];
/// arr[0], arr[1], arr[99]

/// vector < data type > name;

/// to push an element: name.push_back(element);

/// to erase an element: name.erase(name.begin() + index of the element);

/// to erase several elements: name.erase(name.begin() + index of the element, name.begin() + index of the element + 1);

int main()
{
    vector < int > vec;

    int n = vec.size();
    vec.push_back(10);
    vec.push_back(10);
    cout << n << endl;

    for(int i = 1; i <= 20; i++)
        vec.push_back(i);

    /// 10 10 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

    cout << n << endl;

    cout << "First element of this vector: " << vec[0] << endl;

    vec[0] = 50;

    cout << "First element of this vector: " << vec[0] << endl;

    /// printing all elements
    cout << "All elements: " << endl;
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    cout << endl;

    cout << "Size: " << vec.size();

    return 0;
}
