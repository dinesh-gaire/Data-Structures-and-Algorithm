#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class Stack
{
    Node *head = nullptr;

public:
    int size()
    {
        Node *currNode = head;
        int count = 0;
        while (currNode != nullptr)
        {
            count++;
            currNode = currNode->next;
        }
        return count;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            cout << value << " pushed onto stack." << endl;
            return;
        }

        newNode->next = head;
        head = newNode;

        cout << value << " pushed onto stack." << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            return;
        }

        Node *tempNode = head;
        head = head->next;
        cout << tempNode->data << " popped from stack." << endl;
        delete tempNode;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty! No top element." << endl;
            return -1;
        }
        return head->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Element in stack form top to bottom:" << endl;
        Node *currNode = head;
        while (currNode != nullptr)
        {
            cout << currNode->data << endl;
            currNode = currNode->next;
        }
    }
};

int main()
{
    Stack s;

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
    cout << "Current size of stack: " << s.size() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}