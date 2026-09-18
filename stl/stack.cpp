#include<bits/stdc++.h>
using namespace std ;
void explain_stack(){
    stack <int> st ; 
    st.push(1);
    st.push(34);
    st.push(2);
    st.push(56);
    st.push(7);
    st.emplace(9);

    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    cout<<st.empty()<<endl;

    // swap -- st1.swap(st2);
}
int main ()
{
    explain_stack();
    return 0;
}