#include<bits/stdc++.h>
using namespace std ; 
int reverseNum(int n){
    int reverseNumm=0;
    while(n>0){
        int lastDig=n%10 ;
        n=n/10;
        reverseNumm=(reverseNumm*10)+lastDig;
    }
    return reverseNumm;
}
int main (){
    cout<<reverseNum(98765)<<endl;
}