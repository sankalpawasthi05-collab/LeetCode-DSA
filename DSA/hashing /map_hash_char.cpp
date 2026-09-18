#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
    string s; 
    cout<<"Enter the string:"<<endl;
    cin>>s;


   //map
   map<char , int > mpp;
   for (char ch:s ){
    mpp[ch]++;
   }

   for (auto it:mpp){
    cout<<it.first<<"->"<<it.second<<endl;
   }

   // 
   int q;
   cout<<"Enter q:"<<endl;
   cin>>q;
   cout<<"Enter characters :"<<endl;
   while(q--){
    char c;
    cin>>c;
    cout<<mpp[c]<<endl;
   }

   
}