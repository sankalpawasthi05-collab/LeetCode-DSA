#include<bits/stdc++.h>
using namespace std ; 
vector<int> unionArr(vector<int> &a , vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    int i=0 ; 
    int j=0 ;
    vector <int> u;
    while(i<n1 && j<n2){
        if ( a[i]<=b[j]){
           if(u.size()==0 || u.back()!=a[i]){
            u.push_back(a[i]);
           }
           i++;
        }
        else if(b[j]<=a[i]){
            if(u.size()==0 || u.back()!= b[j]){
                u.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(u[i]==0 || u.back()!=a[i]){
            u.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(u[i]==0||u.back()!=b[j]){
            u.push_back(b[j]);
        }
        j++;
    }
    return u;
}
int main ()
{
    vector <int> a={1,4,5,8,9};
    vector<int>b={1,2,2,2,7,8};
    vector<int> ans = unionArr(a,b);
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}