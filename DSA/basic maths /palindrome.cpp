#include<bits/stdc++.h>
using namespace std ; 
void reverseNum(int n){
    int reverseNumm=0;
    int dup=n;
    while(n!=0){
        int lastDig=n%10 ;
        n=n/10;
        reverseNumm=(reverseNumm*10)+lastDig;
    }
    if (reverseNumm==dup ){
        cout<< "number is plindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
}

int main (){
    reverseNum(-43889);
     reverseNum(121);
    

}
