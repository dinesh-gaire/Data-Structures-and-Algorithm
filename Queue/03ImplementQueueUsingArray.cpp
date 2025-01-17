#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front;
    int rear;
    int capacity;

public:
    queue(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    ~queue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return rear == capacity - 1;
    }

    bool isEmpty()
    {
        return front > rear;
    }

    int size()
    {
        return isEmpty() ? 0 : (rear - front + 1);
    }

    int Front()
    {
        if (!isEmpty())
        {
            return arr[front];
        }
        cout << "Queue is empty!" << endl;
        return -1;
    }

    int back()
    {
        if (!isEmpty())
        {
            return arr[rear];
        }
        cout << "Queue is empty!" << endl;
        return -1;
    }

    void enque(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Cannot add." << endl;
            return;
        }

        arr[++rear] = value;
        cout << value << " enqueued to the queue." << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot remove." << endl;
            return;
        }

        cout << arr[front] << " dequeued from the queue." << endl;
        front++;

        // reset front and rear if empty
        if (front > rear)
        {
            front = 0;
            rear = -1;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue from front to rear: " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue q(5);

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