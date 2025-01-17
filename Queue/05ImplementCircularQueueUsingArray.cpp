#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return front == (rear + 1) % size;
    }

    bool isEmpty()
    {
        return front == -1;
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

        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = value;
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
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
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
        int i = front;
        while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }
        cout << arr[rear] << endl;
    }
};

int main()
{
    CircularQueue q(5);

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.enque(50);

    cout << "Queue after pushing elements:" << endl;
    cout << "Front: " << q.Front() << endl;
    cout << "Back: " << q.back() << endl;

    q.display();

    cout << "\nPopping elements from the queue:" << endl;
    q.dequeue();
    cout << "Front after popping: " << q.Front() << endl;
    cout << "Back after popping: " << q.back() << endl;

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