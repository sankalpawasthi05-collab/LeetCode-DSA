#include<bits/stdc++.h>
using namespace std ;
int cnt=1;
void printName(){
    if (cnt==6){
        return ;
    }
    else {
        cout<<cnt<<"."<<"Sankalp"<<endl;
        cnt++;
        printName();
    }
}
int main (){
    printName();
}