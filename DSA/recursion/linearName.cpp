#include<bits/stdc++.h>
using namespace std ; 
void printName(int i , int n){
    if (i>n){
        return ; 
    }
    else {
        cout<<i<<"."<<"Sankalp"<<endl;
        i++;
        printName(i,n);
;    }
}
int main ()
{
    printName(1,5);
}