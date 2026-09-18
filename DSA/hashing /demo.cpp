#include<bits/stdc++.h>
using namespace std ; 
int main ()
{

    // array making 
    int n; 
    cout<<"Enter the n :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element:";
    for (int i=0 ; i<n ; i++){\
        cin>>arr[i];
    }

    // hashing 
    int hash[13]={0};
    for (int i=0 ; i<n ; i++){
        hash[arr[i]]+=1;
    }

    // numbers i want 
    int q;
    cout<<"Enter q:";
    cin>>q;
    cout<<"Enter numbers ";
    while(q--){
        int num ; 
        cin>>num ;
        cout<< hash[num]<<endl;
    }
    return 0;
}