#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Dinesh");
    q.push("is");
    q.push("a");
    q.push("good");
    q.push("boy");

    cout << "First Element: " << q.front() << endl;
    cout << "Last Element: " << q.back() << endl;

    cout << "Size before pop: " << q.size() << endl;
    q.pop();
    cout << "Size after pop: " << q.size() << endl;
}