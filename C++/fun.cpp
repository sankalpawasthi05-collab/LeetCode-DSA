#include<bits/stdc++.h>
using namespace std;
void printName(){
    cout<<"hey Sankalp"<<endl;
}
void printName(string &name){
    // & is used for passed by reference to send original copy of variable menas address of it , if we dont use & it is known as passed by value and copy of variable be sent so original data should not be changed 
    
    cout<<"hey "<<name<<endl;
}
int twoSum(int a , int b ){
    return (a+b);
}
int main()
{
    string name1 ;
    cout<<"Enter name:";
    cin>>name1;
    printName();
    printName(name1);
// returnable fun 
    int a , b;
    cout<<"Enter a and b :"<<endl;
    cin>>a>>b;
    cout<<twoSum(a,b)<<endl;
}