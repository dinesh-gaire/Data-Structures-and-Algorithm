#include <iostream>
#include <string>
using namespace std;

void checkPalindrome(string name, int len)
{
    string originalName = name;
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    if (originalName == name)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}

int main()
{
    string name = "dineshgaire";
    int len = name.length();
    checkPalindrome(name, len);
}