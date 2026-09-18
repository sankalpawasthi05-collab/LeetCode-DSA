#include<bits/stdc++.h>
using namespace std ; 
void gcd(int a , int b){
    int gcd=1 ; 
    for ( int i=1 ; i <=min(a,b); i++){
        if ( a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"gcd of "<< a <<" and "<< b <<" is "<<gcd<<endl;
}
int main ()
{
    gcd(12,35);
    gcd(20,40);
    gcd(12,16);
}