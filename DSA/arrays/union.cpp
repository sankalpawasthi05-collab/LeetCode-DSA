#include<bits/stdc++.h>
using namespace std ;
vector<int> unionArr(vector <int> &a , vector <int> & b){
    int n1=a.size();
    int n2=b.size();
    set <int> st;
    for(int i=0 ; i<n1 ; i++){
        st.insert(a[i]);
    }
    for(int i=0 ; i<n2 ; i++){
        st.insert(b[i]);
    }
    vector<int> temp; 
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
int main ()
{
    vector<int> a={1,2,3,4,4,4,5,9};
    vector<int> b={1,2,3,5,5,0,6,5,7};
    vector<int> ans = unionArr(a,b);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}