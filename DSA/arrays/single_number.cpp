// find number that appears one and all other appears twice


#include<bits/stdc++.h>
using namespace std ; 
int songle_number(vector<int> & arr){
    int n = arr.size();
    int xorr = 0;
    for(int i=0 ; i< n ; i++){
        xorr=xorr^arr[i];
    }
    return xorr;
}
int main (){
    vector<int> arr={1,1,2,3,3,4,4,5,5};
    cout<<songle_number(arr)<<endl;
    return 0;
}