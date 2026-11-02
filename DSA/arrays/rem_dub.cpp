#include<bits/stdc++.h>
using namespace std ; 
int remove_duplicate(vector<int> &arr){
    vector<int> temp;
    int i=0 ;
    for ( int j=1 ; j<arr.size();j++){
        if(arr[j]!=arr[i]){
          arr[i+1]=arr[j];
          i++;
        }
    }
    // for(int i=0 ; i<arr.size();i++){
    //     cout<<arr[i]<<" ;";
    // }
    return i+1;
}
int main ()
{
    vector <int> arr={1,2,3,3,5,5,5,7,8};
   cout<< remove_duplicate(arr)<<endl;
}