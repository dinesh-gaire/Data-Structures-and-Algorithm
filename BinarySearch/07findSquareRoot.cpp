#include <iostream>
using namespace std;

int findSquareRoot(int n)
{
    int start = 1;
    int end = n;
    long long int ans;
    while (start <= end)
    {
        long long int mid = (start + ((end - start) / 2));
        long long int square = (mid * mid);

        if ((square) == n)
        {
            return mid;
        }
        else if ((square) > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double morePrecise(int n, int precision, int root)
{
    double factor = 1;
    double ans = root;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    double root = findSquareRoot(n);
    cout << "Square root: " << morePrecise(n, 3, root) << endl;
}