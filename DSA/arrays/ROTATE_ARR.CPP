#include<bits/stdc++.h>
using namespace std ; 
void rotate_array(vector<int> &arr ){
    int temp=arr[0];
    for (int i=0 ; i<arr.size() ; i++){
        if(i<arr.size()-1){
            arr[i]=arr[i+1];
        }
        else {
            arr[i]=temp;
        }
    }
    for (int i=0 ;i<arr.size();i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main ()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    rotate_array(arr);
    return 0;
}