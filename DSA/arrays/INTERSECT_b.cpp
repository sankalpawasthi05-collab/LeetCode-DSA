#include<bits/stdc++.h>
using namespace std ; 
vector<int> intersectionArr(vector<int> &a , vector<int> &b){
    int n= a.size();
    int m =b.size();
    vector <int> vis(m,0);
    vector<int> ans;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(a[i]==b[j]&&vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
             if (b[j]>a[i]){
                break;
            }
        }
    }
    return ans ;
}
int main ()
{
    vector<int> a={1,2,2,3,3,5,7};
    vector<int> b={1,2,3,3,8,9};
    vector<int> final=intersectionArr(a,b);
    for(auto it:final){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}