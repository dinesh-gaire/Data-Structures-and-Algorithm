#include <iostream>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
        return;

    cout << n << endl; // 5 4 3 2 1
    printCounting(n - 1);
    // cout << n << endl; // 1 2 3 4 5
}

int main()
{
    int n = 5;
    printCounting(n);
    return 0;
}