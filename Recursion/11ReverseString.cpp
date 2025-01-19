#include <iostream>
using namespace std;

void reverseString(string &name, int start, int end)
{
    if (start > end)
    {
        return;
    }

    swap(name[start], name[end]);

    reverseString(name, start + 1, end - 1);
}

int main()
{
    string name = "dinesh";
    reverseString(name, 0, name.length() - 1);
    cout << name;
    cout << endl;
    return 0;
}