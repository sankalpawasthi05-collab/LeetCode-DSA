#include<bits/stdc++.h>
using namespace std ;
void armstrong(int n){
    int cnt =0 ;
    int sum=0;
    int dup=n;
    while (n!=0){
        int lastDig=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    n=dup;
    while(n != 0){
        int lastDig = n % 10;
        sum = sum + pow(lastDig, cnt);
        n = n / 10;
    }
    if (sum==dup){
        cout<<" the number is armstrong number !"<<endl;
    }
    else{
        cout<<"the number is not an armstrong number !"<<endl;
    }
}
int main(){
  armstrong(367658);
  armstrong(371);
  armstrong(1634);
}
