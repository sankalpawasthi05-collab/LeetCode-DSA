#include<bits/stdc++.h>
using namespace std ;
void backtrack(int i,int n){
    if (i<1){
        return ;
    }
    else {
        cout<<i<<",";
        backtrack(i-1,n);
    }
}
int main ()
{
    int n;
    cout<<"Enter the n :"<<endl;
    cin>>n;
    backtrack(n,n);
    cout<<endl;
}