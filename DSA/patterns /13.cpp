#include<bits/stdc++.h>
using namespace std ;
void pr_th(int n){
    int num =1;
    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=i ; j++){
            cout<<num<<" ";
            num =num+1;
        }
        cout<<endl;
    }
}


    void pr_fo(int n){
        for (int i=1 ; i<=n ; i++){
        char a='A';
        for (int j=1 ; j<=i ; j++){
            cout<<a<<" ";
            a =a+1;
        }
        cout<<endl;
    }
}

void pr_fi(int n){
    for (int i=1 ; i<=n ; i++){
        char a='A';
        for (int j= 1; j<=(n-i+1); j++){
            cout<<a<<" ";
             a=a+1;
        }
        cout<<endl;
    }
}
void pr_sixt(int n) {
    char a = 'A'; // Declare OUTSIDE the outer loop
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a;
        }
        a = a + 1; // Now this increment carries over to the next row!
        cout << endl;
    }
    
}
int main ()
{
    pr_th(6);
    cout<<endl;
    pr_fo(5);
    cout<<endl;
    pr_fi(5);
    cout<<endl;
    pr_sixt(5);
    return 0;
}