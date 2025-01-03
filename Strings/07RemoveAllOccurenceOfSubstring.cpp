#include <iostream>
using namespace std;

void removeAllOccurenceOfSubstring(string sentence, string substring)
{
    while (sentence.length()!=0 && sentence.find(substring) < sentence.length())
    {
        int position = sentence.find(substring);
        sentence.erase(position, substring.length());
    }
    cout << sentence << endl;
}

int main()
{
    string sentence = "daaabcbcbc";
    string substring = "abc";
    removeAllOccurenceOfSubstring(sentence, substring);
    return 0;
}