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

void placeInSortedOrder(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int top = s.top();
    s.pop();
    placeInSortedOrder(s, num);
    s.push(top);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();
    sortStack(s);

    // farkida sorted order ma rakni
    placeInSortedOrder(s, num);
}

int main()
{
    stack<int> s;
    s.push(-10);
    s.push(50);
    s.push(-1);
    s.push(10);
    s.push(-5);
    printStack(s);

    sortStack(s);
    cout << "Stack after sorting: " << endl;
    printStack(s);

    return 0;
}