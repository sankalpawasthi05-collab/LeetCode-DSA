#include<bits/stdc++.h>
using namespace std ; 
void euclidion(int a , int b)

// euclidion theorem - gcd(a,b) == gcd (a%b , b ) where a>b 
{
    while (a>0 && b>0){
        if (a>b){
            a=a%b ; 
        }
        else{
            b=b%a;
        }
    }
        if (a==0){
            cout<<"gcd is :" <<b <<endl;
        }
        else{
        cout<<"gcd is :"<< a <<endl;
      }

}
int main () 
    {
        euclidion(52,10);
        euclidion(12,16);
    }