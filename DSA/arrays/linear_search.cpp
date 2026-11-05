#include<bits/stdc++.h>
using namespace std ; 

//function to return opnly 1st index 
int linearsearch(vector<int>&arr , int target){
    int n = arr.size();
    for (int i=0 ; i<n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
    
    return{};
}

// function to return all indexes of target and its count 
int ls(vector<int> &arr , int target){
    int n = arr.size();
    int sum=0;
    for (int i=0 ; i<n ; i++){
        if(arr[i]==target){
            cout<<i<<" ";
            sum=sum+1;
        }
    }
    cout<<endl;
    return sum;
}


int main()
{
    vector<int> arr={1,2,2,3,4,76,4,5,9,8,9,8,6,5,3};
    cout<< linearsearch(arr,8)<<endl;
    cout<<ls(arr,8)<<endl;
}