#include<bits/stdc++.h>
using namespace std ; 
void pr_etn(int n){
    for (int i=0 ; i<n ; i++){
        for (char ch='E'-i ; ch<='E' ;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main ()
{
    pr_etn(5);
}