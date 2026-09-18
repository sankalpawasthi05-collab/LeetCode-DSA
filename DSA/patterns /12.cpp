#include<bits/stdc++.h>
using namespace std; 
void pr_tw(int n){
    for ( int i=1 ; i<=n ; i++){
        // num 
        for (int j=1 ; j<=i ; j++){
            cout<<j;
        }
        //space 
        for (int j=1 ; j<=(n-i);j++){
            cout<<" ";
        }
        // space
         for (int j=1 ; j<=(n-i);j++){
            cout<<" ";
         }
         // num 
         for (int j=i ; j>=1 ;j--){
            cout<<j;
         }
         cout<<endl;
    }
}

int main (){
    pr_tw(5);
}
