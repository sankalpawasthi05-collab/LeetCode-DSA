#include<bits/stdc++.h>
using namespace std ; 
void Prime(int n){
    int cnt=0 ;
    vector <int> ls ;  
    for (int i=1 ; i*i<n ;i++){
        if (n%i==0){
            cnt++;
            if((n/i)!=i){
                cnt++;
            }
        }
    }
    if (cnt==2){
            cout<<"The number " <<n<< " is prime number :"<<endl ;
        }
        else{
            cout<<"the number " <<n<< " is not prime :"<<endl;
        }
}
int main ()
{
    Prime(17);
    Prime(15);
    Prime(31);
}