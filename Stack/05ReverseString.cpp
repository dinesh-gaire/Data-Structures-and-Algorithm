#include <iostream>
#include <stack>
using namespace std;

string reverseString(string name)
{
    stack<char> s;
    for (int i = 0; i < name.length(); i++)
    {
        s.push(name[i]);
    }

    string reversedStr = "";
    for (int i = 0; i < name.length(); i++)
    {
        reversedStr.push_back(s.top());
        s.pop();
    }

    return reversedStr;
}

string reverseStringRecursion(string name)
{
    if (name.empty())
    {
        return name;
    }

    return reverseStringRecursion(name.substr(1)) + name[0];
}

int main()
{
    string name = "dinesh";
    cout << "The reversed string is: " << reverseString(name) << endl;
    cout << "The reversed string using recursion is: " << reverseStringRecursion(name) << endl;
    return 0;
}