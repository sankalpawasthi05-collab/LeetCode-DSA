// #include<bits/stdc++.h>
// using namespace std ;
// void fun(){
//     cout<<"Sankalp"<<endl;
//     fun();
// }
// int main (){
//     fun();
// }
#include<bits/stdc++.h>
using namespace std; 
int cnt=0;
void fun (){
    if (cnt == 4 ){
        return ; // terminates the function entirely if the condition will satisfy 
    }
    else {
        cout<<cnt<<endl;
        cnt++;
        fun();
    }
}
int main (){
    fun();
}