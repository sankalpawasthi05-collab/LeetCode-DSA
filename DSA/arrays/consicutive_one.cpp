#include<bits/stdc++.h>
using namespace std ; 
int maxConsecutiveOne(vector<int> & arr){
    int n = arr.size();
    int count=0;
    int maxi=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==1){
            count=count+1;
            maxi=max(count,maxi);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr={1,1,1,0,0,1,0,1,1,1,1,1,0,0};
    cout<<maxConsecutiveOne(arr)<<endl;
    return 0;
}