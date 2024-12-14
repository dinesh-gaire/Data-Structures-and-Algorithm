/*
****
 ***
  **
   *
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;
    char val='*';

    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<' ';
            space--;
        }
        int j=n-i+1;
        while(j>=1){
            cout<<val;
            j--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}