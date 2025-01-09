#include <iostream>
#include <string>
using namespace std;

string arr[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

void sayDigits(int n)
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    sayDigits(n);
    cout << arr[digit] << " ";
}

int main()
{
    int n = 578;
    sayDigits(n);
    cout << endl;
    return 0;
}