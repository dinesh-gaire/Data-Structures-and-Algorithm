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

class queue
{
    Node *head = nullptr;
    Node *tail = nullptr;

public:
    bool isEmpty()
    {
        return head == nullptr;
    }

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

    int Front()
    {
        if (!isEmpty())
        {
            return head->data;
        }
        cout << "Queue is empty!" << endl;
        return -1;
    }

    int back()
    {
        if (!isEmpty())
        {
            return tail->data;
        }
        cout << "Queue is empty!" << endl;
        return -1;
    }

    void enque(int value)
    {
        Node *newNode = new Node(value);

        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cout << tail->data << " enqueued to the queue." << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot remove." << endl;
            return;
        }

        Node *tempNode = head;
        head = head->next;
        cout << tempNode->data << " dequeued from the queue." << endl;
        delete tempNode;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue from front to rear: " << endl;
        Node *currNode = head;
        while (currNode != nullptr)
        {
            cout << currNode->data << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }
};

int main()
{
    queue q;

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);

    cout << "Queue after pushing elements:" << endl;
    cout << "Front: " << q.Front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    q.display();

    cout << "\nPopping elements from the queue:" << endl;
    q.dequeue();
    cout << "Front after popping: " << q.Front() << endl;
    cout << "Back after popping: " << q.back() << endl;
    cout << "Size after popping: " << q.size() << endl;

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty())
    {
        cout << "\nQueue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }
    return 0;
}