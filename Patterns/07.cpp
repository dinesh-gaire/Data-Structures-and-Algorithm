/*
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;

int main(){
    int n=3;
    char val='A';

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<val;
            j++;
        }
        val++;
        i++;
        cout<<endl;
    }
    return 0;
}