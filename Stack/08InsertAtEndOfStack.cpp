#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s)
{
    if (s.empty())
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    cout << "Current stack (top to bottom): ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &s, int value)
{
    // base case
    if (s.empty())
    {
        s.push(value);
        return;
    }

    int num = s.top();
    s.pop();
    // recursive function
    insertAtBottom(s, value);
    // farkida nikaleko rakhni
    s.push(num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);

    int valueToInsert = 0;
    insertAtBottom(s, valueToInsert);
    cout << "After Inserting: " << endl;
    printStack(s);
    return 0;
}