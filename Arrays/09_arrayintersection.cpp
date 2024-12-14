#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Brute Force time-O(n^2) space-O(n)
/*
void printIntersection(int arr1[], int arr2[], int size){
    int a[size];
    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr1[i]<arr2[j]){
                break;
            }
            if(arr1[i]==arr2[j]){
                a[k]=arr1[i];
                arr2[j]=-1;
                k++;
            }
        }
    }
    for(int i=0; i<k; i++){
        cout<<a[i]<<" ";
    }
}
*/

/*
// Two-Pointer (After Sorting)	O(n log n)	O(1)
void printIntersection(int arr1[], int arr2[], int size){
    sort(arr1, arr1+size);
    sort(arr2, arr2+size);

    int k=0;
    int a[size];
    int i=0, j=0;

    while(i<size && j<size){
        if(arr1[i]<arr2[j]){
            i++;
        }else if (arr1[i]>arr2[j])
        {
            j++;
        }else{
            a[k]=arr1[i];
            k++;
            j++;
            i++;
        }

    }
}
*/

// Hash Set	O(n)	O(n)
void printIntersection(int arr1[], int arr2[], int size)
{
    unordered_set<int> set;
    int a[size]; // Array to store the intersection
    int k = 0;   // Index to store intersection elements in `a`

    // Insert all elements of arr1 into the set
    for (int i = 0; i < size; i++)
    {
        set.insert(arr1[i]);
    }

    // Check for intersections with elements in arr2
    for (int i = 0; i < size; i++)
    {
        if (set.find(arr2[i]) != set.end())
        {
            a[k] = arr2[i];
            k++;
            set.erase(arr2[i]); // Remove element to avoid duplicates
        }
    }

    // Print the intersection elements
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[5] = {4, 5, 3, 3, 2};
    int arr2[5] = {3, 4, 5, 6, 7};
    printIntersection(arr1, arr2, 5);
    return 0;
}