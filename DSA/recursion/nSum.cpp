#include<bits/stdc++.h>
using namespace std ; 
int sum=0;
void summ (int i,int n){
    if (i>n){
        return ;
    }
    else{
        sum=sum+i;
        i++;
        summ(i,n);
    }
}
int main (){
    summ(1,5);
    cout<<sum<<endl;
}