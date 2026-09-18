#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    //mapping 
    //map aal the values i sorted form 
    map<int ,int> mpp;
    for(int i=0 ; i<n ;i++){
        mpp[arr[i]]++;
    }

    //iteration in map 
    for (auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    //query
    int q ;
    cout<<"Enter the value of q:"<<endl;
    cin>>q;
    cout<<"Enter the numbers:"<<endl;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
}