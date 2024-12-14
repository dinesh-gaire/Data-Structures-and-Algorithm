#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Dinesh");
    s.push("is");
    s.push("a");
    s.push("good");
    s.push("boy");

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Top element: " << s.top() << endl;

    cout << "Size: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
}