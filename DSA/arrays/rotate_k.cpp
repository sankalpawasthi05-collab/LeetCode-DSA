#include<bits/stdc++.h>
using namespace std ; 
void rotate_k(vector <int> &arr , int k ){
    vector<int> temp;
    for(int i=0 ; i<k ;i++){
        temp[i]=arr[i];
    }
    for(int i=0 ; i<arr.size(); i++){
        if(i>=k&& i<arr.size()){
            arr[i]==arr[i+1];
        }
        else{
            arr[i]=temp[i];
        }
    }
}
