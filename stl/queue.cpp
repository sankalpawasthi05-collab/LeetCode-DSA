#include<bits/stdc++.h>
using namespace std ; 
void explain_queue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    q.back()+=5;
    cout<<q.back()<<endl;

    q.pop();
    cout<<q.front()<<endl;
}
int main ()
{
    explain_queue();
}