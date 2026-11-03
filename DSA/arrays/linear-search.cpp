#include<bits/stdc++.h>
using namespace std ; 
void return_index(vector<int> &arr ,int target){
    for (int i=0 ; i<arr.size();i++){
        if (arr[i]==target){
            cout<< i <<endl;
            break;
        }
    }
}
int main ()
{
    vector<int> arr={1,34,3,56,5,7,8,2,1,5};
    return_index(arr,5);
    return 0;
}