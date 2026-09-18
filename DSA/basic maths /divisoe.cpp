// #include<bits/stdc++.h>
// using namespace std ;
// void print_divisor(int n){
//     for(int i=1 ; i<=n ; i++){
//         if (n%i==00){
//             cout<<i<<", ";
//         }
//     }
//     cout<<endl;
// }
// int main (){
//     print_divisor(36);
// }
#include<bits/stdc++.h>
using namespace std ; 
void divisor(int n){
    vector<int> ls;
    for (int i=1 ; i<=sqrt(n); i++){
        if (n%i==0){
            ls.push_back(i);
            if ((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls){
        cout<<it<<endl;
    }
}
int main(){
    divisor(36);
}
