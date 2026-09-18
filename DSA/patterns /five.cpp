#include<bits/stdc++.h>
using namespace std;
void print_five(){
    int n ;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for (int i=1 ; i<=n; i++){
        for ( int j=1 ; j<=(n-i+1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print_six(){
    int m ;
    cout<<"Enter the value of m:"<<endl;
    cin>>m;
    for (int i=1 ; i<=m; i++){
        for ( int j=1 ; j<=(m-i+1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    print_five();
    cout<<endl;
    cout<<endl;
    print_six();
    return 0;
}