#include<bits/stdc++.h>
using namespace std ; 
void pr_nntn(int n){
    for (int i=0 ; i<n ; i++){
        // stars 
        for (int j=0 ; j<(n-i) ; j++){
            cout<<"*";
        }
        // space 
        for ( int j=0 ; j<i ; j++){
            cout<<" ";
        }
        // space 
        for ( int j=0 ; j<i ; j++){
            cout<<" ";
        }
        //stars 
        for (int j=0 ; j<(n-i) ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for ( int i=0 ; i<n ; i++){
        //stars 
        for ( int j=0 ; j<=i ; j++){
            cout<<"*";
        }
        // space 
        for (int j=0 ; j<(n-i-1); j++){
            cout<<" ";
        }
        // space 
        for (int j=0 ; j<(n-i-1); j++){
            cout<<" ";
        }
         //stars 
        for ( int j=0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main ()
{
    pr_nntn(4);
}