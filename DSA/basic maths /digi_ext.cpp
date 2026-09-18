#include<bits/stdc++.h>
using namespace std ;
void extract_num(int n){
    int sum =0; 
    int count =0;
    while(n>0){
        int last_digit=n%10;
        cout<<"last digit"<<last_digit<<endl;
        n=n/10; 
        count = count+1;
        cout<<"count of digits :"<<count<<endl;
        sum=sum+last_digit;
        cout<<"sum="<<sum<<endl;
        cout<<endl;

    }
}
int main (){
    extract_num(9856);
    return 0 ; 
}
