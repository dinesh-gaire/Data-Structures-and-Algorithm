#include <iostream>
using namespace std;

void removeSpaces(string sentence)
{
    int i = 0;
    string temp;
    while (i < sentence.length())
    {
        if (sentence[i] == ' ')
        {
            temp += "@40";
        }
        else
        {
            temp += sentence[i];
        }
        i++;
    }
    cout << temp << endl;
}

int main()
{
    string sentence = "the reverse words";
    removeSpaces(sentence);
    return 0;
}