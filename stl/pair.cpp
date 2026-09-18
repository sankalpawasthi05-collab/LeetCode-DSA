#include<bits/stdc++.h>
using namespace std ;
void ex_pair(){
    pair<int,int> p={1,3};
    cout<<p.first<<endl<<p.second<<endl;
    pair<int,pair<int,string>> s={1,{2,"Sankalp"}};
    cout<<s.first<<endl<<s.second.first<<endl<<s.second.second<<endl;
    pair<int ,int> arr[]={{1,2},{2,3},{23,45}};
}
int main (){
    ex_pair();
}