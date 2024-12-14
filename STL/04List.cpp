#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> a(5, 100);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> b(a);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;

    l.erase(l.begin());
    cout << "After erase: " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}