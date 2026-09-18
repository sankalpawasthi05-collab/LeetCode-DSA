#include<bits/stdc++.h>
using namespace std;
void exp_vector(){
    vector <int> v;
    // to push element 
    v.push_back(2);
    v.push_back(4);
    v.push_back(14);
    v.push_back(16);
    v.emplace_back(2);
    vector <pair<int,int>> s;
    s.push_back({1,2});
    s.emplace_back(1,2);

    vector<int>d(5,20);
    vector<int> f(6);
    vector <int> v1(5,10);
    vector <int> v2(v1);// v2 is copy

    // // printing values present in vector 
    // vector<int>::iterator a=v2.begin();
    // cout<<*a<<""<<endl;

    // // PRINTING VECTOR 

    // for (vector<int>::iterator a=v.begin(); a!=v.end(); a++){
    //     cout<<*a<<" ";
    // }
    // cout<<endl;

    // for (auto a=v.begin(); a!=v.end(); a++){
    //     cout<<*a<<" ";
    // }
    // cout<<endl;

    for (auto a:v){
        cout<<a<<" ";
    }
    cout<<endl;


    //ERASE PROPERTY 
    // v.erase(v.begin()+2);

    // for (auto a:v){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // v.erase(v.begin(),v.begin()+2);

    // for (auto a:v){
    //     cout<<a<<" ";
    // }
    // cout<<endl;



    //INSERT FUNCTION 
//     v.insert(v.begin()+1,2,34);
//      for (auto a:v){
//         cout<<a<<" ";
//     }
//     cout<<endl;



//     // INSERTING COPY OF AN VECTOR 
//     vector<int> copy(3,75);
//     v.insert(v.begin(),copy.begin(),copy.begin()+3);
//     for (auto a:v){
//         cout<<a<<" ";
//     }
//     cout<<endl;
 }
int main()
{
    exp_vector();
}