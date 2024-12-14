/*
D
CD
BCD
ABCD
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char val='A' + n - j;
            cout<<val;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}