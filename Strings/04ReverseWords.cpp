#include <iostream>
using namespace std;

string reverseString(string word, int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
    return word;
}

void reverseWords(string sentence)
{
    string word;
    string reverseWords;
    int i = 0;
    while (i < sentence.length())
    {
        if (sentence[i] != ' ')
        {
            word += sentence[i];
        }
        else
        {
            string reversedWord = reverseString(word, word.length());
            reverseWords += reversedWord + ' ';
            word = "";
        }
        i++;
    }
    if (!word.empty())
    {
        string reversedWord = reverseString(word, word.length());
        reverseWords += reversedWord;
    }
    cout << reverseWords;
}

int main()
{
    string sentence = "the reverse words";
    reverseWords(sentence);
    cout << endl;
}