#include<bits/stdc++.h>
using namespace std ;
int missing_number(vector<int> & arr){
    int n=arr.size();
    int m=n+1;
    int sum = (m*(m+1))/2;
    int s2=0;
    for(int i=0 ; i<n ; i++){
        s2=s2+arr[i];
    }
    return (sum-s2);
}
int main ()
{
    vector<int> arr={1,2,3,4,6,7,8,9};
    cout<<missing_number(arr)<<endl;
    return 0;
}