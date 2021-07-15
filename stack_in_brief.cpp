#include <bits/stdc++.h>
using namespace std;

int stk[100], n = 100, top = -1;

void push(int val)
{
    if(top >= n - 1)
        cout << "Stack Overflow." << endl;
    else {
        top++;
        stk[top] = val;
    }
}

void pop()
{
    if(top <= -1)
        cout << "Stack Underflow." << endl;
    else {
        cout << "The popped element is " << stk[top] << endl;
        top--;
    }
}

void display()
{
    if(top >= 0)
    {
        cout << "Stack elements are: ";
        for(int i = top; i >= 0; i--)
            cout << stk[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty." << endl;
}

int main()
{
    int ch, val;
    cout << "1) Push in Stack." << endl;
    cout << "2) Pop from Stack." << endl;
    cout << "3) Display Stack." << endl;
    cout << "4) Exit." << endl;

    do {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch(ch) {
            case 1: {
                cout << "Enter value to be pushed: " << endl;
                cin >> val;
                push(val);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            default: {
                cout << "Invalid Choice." << endl;
            }
        }
    } while(ch != 4);
    return 0;
}
