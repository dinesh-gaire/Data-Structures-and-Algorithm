#include <iostream>
#include <stack>
using namespace std;

bool checkRedundantBrackets(string expn)
{
    stack<char> s;

    for (int i = 0; i < expn.length(); i++)
    {
        char ch = expn[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            s.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                if (s.top() == '(')
                {
                    return true;
                }

                while (s.top() != '(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return false;
}

int main()
{
    string expression = "a + ((b+c))";
    checkRedundantBrackets(expression) ? cout << "Redundant Brackets found." : cout << "Redundant Brackets not found";
    cout << endl;
    return 0;
}