#include<bits/stdc++.h>
using namespace std ; 
int missing_num(vector<int>& arr){
    int n = arr.size();
    for(int i=1 ; i<=n ; i++){
        int count=0;
        for(int j=0 ; j<n-1 ; j++){
            if(arr[j]==i){
                count=1;
                break;;
            }
        }
        if(count==0){
            return i;
        }
    }
    return 0;
}
int main ()
{
    vector<int> arr={1,2,4,5,6,7,8};
    cout<<missing_num(arr)<<endl;
    return 0;
}