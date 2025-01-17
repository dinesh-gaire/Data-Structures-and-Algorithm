#include <iostream>
#include <stack>
using namespace std;

void printStackStatus(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is Empty" << endl;
        return;
    }
    
    cout << "Current stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    cout << "Pushing elements onto the stack..." << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    printStackStatus(s);
    
    cout << "\nTop element before popping: " << s.top() << endl;
    s.pop();
    
    cout << "Top element after popping: " << s.top() << endl;
    s.pop();

    cout << "Size of stack after two pops: " << s.size() << endl;

    cout << "Top element after popping again: " << s.top() << endl;
    s.pop();

    cout << "Top element after one more pop: " << s.top() << endl;
    s.pop();

    cout << "Top element after final pop: " << s.top() << endl;
    s.pop();

    if (s.empty()) {
        cout << "\nStack is Empty" << endl;
    }

    return 0;
}
