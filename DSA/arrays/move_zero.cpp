#include<bits/stdc++.h>
using namespace std ; 
void move_zero(vector<int> &arr){
    int n= arr.size();
    vector<int> temp;
    for (int i=0 ;i<n ;i++){
        if(arr[i]!= 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0 ; i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n ; i++){
        arr[i]=0;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl;

}

int main ()
{
    vector<int> arr={1,2,3,0,0,4,10,0,0,5,6,0,7,0};
    move_zero(arr);
    return 0;
}