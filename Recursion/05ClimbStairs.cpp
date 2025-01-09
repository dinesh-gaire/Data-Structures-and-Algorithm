#include <iostream>
using namespace std;

int countNoOfWaysToClimbStairs(int n)
{
    // base case
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return (countNoOfWaysToClimbStairs(n - 1) + countNoOfWaysToClimbStairs(n - 2));
}

int main()
{
    int noOfStairs = 5;
    cout << countNoOfWaysToClimbStairs(noOfStairs) <<endl;
    return 0;
}