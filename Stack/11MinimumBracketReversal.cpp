#include <iostream>
#include <stack>
using namespace std;

int minBracketsReversal(string expn)
{
    if (expn.length() % 2 != 0)
    {
        return -1;
    }

    stack<char> s;

    for (int i = 0; i < expn.length(); i++)
    {
        char ch = expn[i];
        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // ch is }
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    // now stack contains only invalid expn

    int countOpen = 0;
    int countClose = 0;

    while (!s.empty())
    {
        char ch = s.top();
        if (ch == '{')
        {
            countOpen++;
        }
        else
        {
            countClose++;
        }
        s.pop();
    }
    int ans = (countOpen + 1) / 2 + (countClose + 1) / 2;
    return ans;
}
int main()
{
    string expression = "{{{{}{";
    cout << "The minimum no of brackets to be reversed is: " << minBracketsReversal(expression);
    cout << endl;
    return 0;
}