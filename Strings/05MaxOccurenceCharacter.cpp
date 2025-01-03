#include <iostream>
using namespace std;

void maxOccurence(string word)
{
    int freq[26] = {0};
    for (int i = 0; i < word.length(); i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') // lowercase
        {
            freq[ch - 'a']++;
        }
        else
        { // uppercase
            freq[ch - 'A']++;
        }
    }

    int maxVal = freq[0], ans = 0;
    for (int i = 1; i < 26; i++)
    {
        if (maxVal < freq[i])
        {
            maxVal = freq[i];
            ans = i;
        }
    }

    char maxOccChar = 'a' + ans;
    cout << maxOccChar << endl;
}

int main()
{
    string word = "thereversewords";
    maxOccurence(word);
    return 0;
}