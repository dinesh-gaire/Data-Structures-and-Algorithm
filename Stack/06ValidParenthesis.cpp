#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }

        if (!s.empty())
        {
            char topChar = s.top();
            if ((ch == ')' && topChar == '(') || (ch == '}' && topChar == '{') || (ch == ']' && topChar == '['))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
        return true;

    return false;
}

int main()
{
    string expression = "[(a+b)^2-{(a)^2}]";
    isValidParenthesis(expression) ? cout << "Valid parenthesis" : cout << "Invalid parenthesis";
    cout << endl;

    return 0;
}