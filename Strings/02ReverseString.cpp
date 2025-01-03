#include <iostream>
using namespace std;

int lengthOfString(char name[])
{
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    return count;
}

void reverseString(char string[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        swap(string[start], string[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[] = "dineshgaire";
    int len = lengthOfString(name);
    reverseString(name, len);
    cout << name <<endl;
}