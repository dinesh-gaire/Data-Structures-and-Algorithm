#include <iostream>
#include <algorithm>
using namespace std;


/*
Total Time Complexity:

    Sorting: Sorting the array takes O(nlog⁡n).
    Outer loop: The outer loop runs O(n) times (since i runs from 0 to n - 3).
    Inner loop: The inner loop, which uses two pointers, takes O(n) for each iteration of the outer loop.

Thus, for each of the O(n) iterations of the outer loop, the inner two-pointer traversal takes O(n) time. So, the total time complexity of the algorithm is:
O(nlog⁡n) (for sorting)+O(n2) (for the outer loop and the two-pointer traversal)=O(n2)
O(nlogn) (for sorting)+O(n2) (for the outer loop and the two-pointer traversal)=O(n2)
*/
/*
Total Space Complexity:

The input array arr takes O(n space.
The sorting operation requires O(log⁡n) auxiliary space (for recursion in sorting).
Other variables take constant space O(1).

Thus, the overall space complexity is:
O(n)+O(log⁡n)+O(1)=O(n)
O(n)+O(logn)+O(1)=O(n)
*/
void findTripletSum(int arr[], int size, int sum)
{
    sort(arr, arr + size);

    int i = 0;
    while (i < (size - 2))
    {
        int start = i+1;
        int end = size - 1;
        while (start < end)
        {
            int currentSum = arr[i] + arr[start] + arr[end];

            if (currentSum == sum)
            {
                cout << "(" << arr[i] << "," << arr[start] << "," << arr[end] << ")" << endl;
                start++;
                end--;
            }
            else if (currentSum < sum)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        i++;
    }
}

int main()
{
    int arr[7] = {5, 7, 3, 2, 4, 6, 1};
    int sum = 11;
    findTripletSum(arr, 7, sum);

    return 0;
}