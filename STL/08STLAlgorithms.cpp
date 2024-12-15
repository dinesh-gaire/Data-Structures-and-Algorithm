#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // binary search implementation
    cout << "Finding 3: " << binary_search(v.begin(), v.end(), 4) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 4;
    swap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    string s = "abcde";
    reverse(s.begin(), s.end());
    cout<<"Reversed String: "<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After Rotating: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());
    cout<<"After Sorting: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}