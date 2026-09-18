#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;

    // hashing 
    int hash[26]={0};
    for (int i=0 ; i<s.size();i++){
        hash[s[i]-'a']++;
    }

    // characters 
    int q ;
    cout<<"Enter q"<<endl;
    cin>>q;
    cout<<"Enter the characters:"<<endl;
    while(q--){
        char c; 
        cin>>c;
        cout<<hash[c-'a']<<endl; 
    }
    return 0;

 }
        