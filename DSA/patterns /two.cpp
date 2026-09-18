#include<bits/stdc++.h>
using namespace std ;
void print_p1(){
    for (int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print_p2(){
    for (int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<=i ; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print_p3(){
    for (int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<=i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main ()
{
    print_p1();
    cout<<endl;
    cout<<endl;
    print_p2();
    cout<<endl;
    cout<<endl;
    print_p3();
}