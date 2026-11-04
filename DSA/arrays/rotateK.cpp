#include<bits/stdc++.h>
using namespace std ;
void rotate(vector<int> &arr , int k ){
    int n = arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k , arr.end());
    reverse(arr.begin(), arr.end());
    for(int i=0 ; i<n ;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main ()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    rotate(arr,4);
    return 0;
}