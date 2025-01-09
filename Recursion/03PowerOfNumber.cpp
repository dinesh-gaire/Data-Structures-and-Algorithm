#include <iostream>
using namespace std;

int powerOfNumber(int base, int power)
{
    // base case
    if (power == 0)
        return 1;

    return (base * powerOfNumber(base, power -1));
}

int main()
{
    int base = 5;
    int power = 3;
    cout << powerOfNumber(base, power)<<endl;
    return 0;
}