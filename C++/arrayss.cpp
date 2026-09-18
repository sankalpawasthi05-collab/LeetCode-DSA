#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    string name[2]={"Sankalp" , "Shekhar"};
    int num[3];
    cout<<"Enter the array elements :"<<endl;
    cin>>num[0]>>num[1]>>num[2];
    cout<<num[2]<<endl;
    cout<<name[1]<<endl;
    // arrays can be modified 
    arr[2]=arr[2]+10;
    cout<<arr[2];
}


