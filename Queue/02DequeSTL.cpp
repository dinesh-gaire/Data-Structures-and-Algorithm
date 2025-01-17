#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_front(50);

    cout << "Deque after pushing elements:" << endl;
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;
    cout << "Size: " << dq.size() << endl;

    cout << "\nPopping elements from the deque:" << endl;
    dq.pop_back();
    cout << "Front after popping: " << dq.front() << endl;
    cout << "Back after popping: " << dq.back() << endl;
    cout << "Size after popping: " << dq.size() << endl;

    dq.pop_back();
    dq.pop_front();
    dq.pop_back();
    dq.pop_back();

    if (dq.empty())
    {
        cout << "\nDeque is empty!" << endl;
    }
    else
    {
        cout << "Deque is not empty!" << endl;
    }
    return 0;
}