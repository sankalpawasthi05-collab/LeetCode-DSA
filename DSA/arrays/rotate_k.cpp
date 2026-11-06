#include<bits/stdc++.h>
using namespace std;

void rotatek(vector<int>& arr, int k){
    int n = arr.size();
    k = k % n;

    vector<int> temp;

    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }

    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[n-k+i] = temp[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    rotatek(arr,2);
}