/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;

    int i=1;
    while(i<=n){
        //print spaces(1st traingle)
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        //print 2nd triangle
        int k=2*i-2;
        while(k){
            cout<<'*';
            k--;
        }

        //print 3rd triangle
        int start=n-i+1;
        while(start>=1){
            cout<<start;
            start--;
        }
        
        i++;
        cout<<endl;
    }
    return 0;
}