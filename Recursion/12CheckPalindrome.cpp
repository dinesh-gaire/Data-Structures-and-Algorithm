#include <iostream>
using namespace std;

bool checkPalindrome(string &name, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (name[start] == name[end])
    {
        return checkPalindrome(name, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string name = "radar";
    cout << checkPalindrome(name, 0, name.length() - 1);
    cout << endl;
    return 0;
}