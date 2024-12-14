#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 1);
    cout << "Printing a: ";
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> b(a); // b is copy of a
    cout << "Printing b: ";
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(5);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(6);
    cout << "Capacity-> " << v.capacity() << endl;

    cout << "Size-> " << v.size() << endl;

    cout << "Element at index 2: " << v.at(2) << endl;

    cout << "Element at first: " << v.front() << endl;
    cout << "Element at last: " << v.back() << endl;

    cout << "Before pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "Before clear size" << endl;
    cout << "Size-> " << v.size() << endl;
    v.clear();
    cout << "Before clear size" << endl;
    cout << "Size-> " << v.size() << endl;
}