#include<bits/stdc++.h>
using namespace std ;
void pr_seventeen(int n ){
    for (int i=0 ; i<n ; i++){
        //space 
        for (int j=0 ; j<(n-i-1); j++){
            cout<<" ";
        } 
        // characters 
        char ch ='A';
        for (int j=0 ; j<=i ; j++){
            cout<<ch;
            ch=ch+1;
        }
        // characters 
        ch=ch-2;
        for ( int j=0 ; j<i ; j++){
            cout<<ch;
            ch=ch-1;
        }
        cout<<endl;
    }
}
int main ()
{
    pr_seventeen(5);
}