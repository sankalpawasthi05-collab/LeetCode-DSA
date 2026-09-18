#include<bits/stdc++.h>
using namespace std ;

void pr_ten(int n){
    for (int i=0 ; i<n ; i++){
        for ( int j=0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
        }
    
    for (int i=1 ; i<=n ; i++){
            for (int j=1 ; j<=(n-i-1); j++){
                cout<<"*";
            }
            cout<<endl;
}
}
int main (){
    pr_ten(5);
}