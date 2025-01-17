#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Queue after pushing elements:" << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    cout << "\nPopping elements from the queue:" << endl;
    q.pop();
    cout << "Front after popping: " << q.front() << endl;
    cout << "Back after popping: " << q.back() << endl;
    cout << "Size after popping: " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    if (q.empty())
    {
        cout << "\nQueue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }
    return 0;
}