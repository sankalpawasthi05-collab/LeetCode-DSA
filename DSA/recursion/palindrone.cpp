#include<bits/stdc++.h>
using namespace std ; 
bool check(string &s , int i){
    if (i>=s.size()/2){
        return true ;
    }
    else {
        if (s[i]!=s[(s.size()-i-1)]){
            return false ;
        }
        else{
            return check(s,i+1);
        }
    }
}
int main (){
    string s; 
    cout<<"Enter the string :"<<endl;
    cin>>s;
    cout<<"is palindrone?:"<<check (s,0)<<endl;;
    return 0;
}