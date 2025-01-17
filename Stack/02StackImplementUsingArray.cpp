#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int capacity;
    int topIndex;

public:
    Stack(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return topIndex == capacity - 1;
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow! Cannot push" << endl;
            return;
        }

        arr[++topIndex] = value;
        cout << value << " pushed onto stack." << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return;
        }

        cout << arr[topIndex] << " popped from stack." << endl;
        topIndex--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty! No top element." << endl;
            return -1;
        }
        return arr[topIndex];
    }

    int size()
    {
        return topIndex + 1;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Element in stack form top to bottom:" << endl;
        for (int i = topIndex; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    s.display();

    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout <<"Current size of stack: "<<s.size() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}