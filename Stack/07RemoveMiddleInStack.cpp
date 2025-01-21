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

void removeMiddle(stack<int> &s, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();
    // recursive function
    removeMiddle(s, count + 1, size);
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

    int size = s.size();
    removeMiddle(s, 0, size);
    cout << "After removing: " << endl;
    printStack(s);
    return 0;
}