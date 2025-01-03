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

int main()
{
    char name[] = "dineshgaire";
    cout << "Length of String: " << lengthOfString(name) << endl;
}