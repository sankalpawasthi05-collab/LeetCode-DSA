#include<bits/stdc++.h>
using namespace std ;
int largest_element(vector <int>&arr ){
    int largest = arr[0];
    for(int i=0 ; i<arr.size() ; i++){
    if(arr[i]>largest){
        largest=arr[i];
    }    
    }
    return largest ;
}

int main (){
    vector<int> arr={1,34,2,5,7,8,23,45,9,54};
    cout<<largest_element(arr)<<endl;
    return 0;
}