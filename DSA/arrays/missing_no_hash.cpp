#include<bits/stdc++.h>
using namespace std ;
int missing_no(vector<int> &arr){
    int n = arr.size();
    vector<int> hash(n+1, 0);
    for(int i=0 ; i<n ; i++){
       hash[arr[i]]=1;
    }
    for(int i=1 ; i<n ; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return 0;
}
int main ()
{
    vector<int> arr={1,2,3,5,6,7,8,9};
    cout<<missing_no(arr)<<endl;
}