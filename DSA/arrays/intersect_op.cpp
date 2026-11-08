#include<bits/stdc++.h>
using namespace std ; 
vector<int> intersect_arr(vector<int> & A , vector<int> &B){
    int n = A.size();
    int m = B.size();
    int i=0 ; 
    int j=0;
    vector<int> ans; 
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if (B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans ; 
}
int main ()
{
    vector<int> A={1,1,2,3,4,4,55};
    vector<int> B={1,2,3,4,5,6,7,9};
    vector<int> final=intersect_arr(A,B);
    for(auto it:final){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}