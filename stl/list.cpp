#include<bits/stdc++.h>
using namespace std;
 void exp_list(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(3);
    ls.emplace_front(45);

    for (auto a:ls){
        cout<<a<<" ";
    }
    cout<<endl;
}
int main ()
{
    exp_list();
}