#include<bits/stdc++.h>
using namespace std ; 
void print(int n){
    if (n<1){
        return ;
    }
    else{
        cout<<n<<",";
        n--;
        print(n);
    }
    cout<<endl;
}
int main (){
    print(34);
}