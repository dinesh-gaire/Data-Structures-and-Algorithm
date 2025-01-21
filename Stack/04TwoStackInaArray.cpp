#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top1;
    int top2;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top1 = -1;
        top2 = capacity;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push1(int value)
    {
        if (top1 == top2 - 1 || top1 == capacity - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        arr[++top1] = value;
    }

    void push2(int value)
    {
        if (top2 == top1 + 1 || top2 == 0)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        arr[--top2] = value;
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        top1--;
    }

    void pop2()
    {
        if (top2 == capacity)
        {
            cout << "Stack Underflow!" << endl;
            return;
        }

        top2++;
    }

    void print1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty." << endl;
            return;
        }

        cout << "Stack1(Top to bottom): " << endl;
        for (int i = top1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void print2()
    {
        if (top2 == capacity)
        {
            cout << "Stack 2 is empty." << endl;
            return;
        }

        cout << "Stack2(Top to bottom): " << endl;
        for (int i = top2; i <= capacity - 1; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s(5);
    s.push1(1);
    s.push2(5);
    s.push1(2);
    s.push2(4);
    s.push1(3);
    s.push2(6);

    s.print1();
    s.print2();

    s.pop1();
    s.push2(6);

    s.print1();
    s.print2();

    s.pop1();
    s.pop2();
    s.pop1();
    s.pop2();
    s.pop1();

    s.print1();
    s.print2();

    return 0;
}