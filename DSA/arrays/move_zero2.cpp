#include<bits/stdc++.h>
using namespace std ; 
void move(vector<int> &arr ){
    int n = arr.size();
    int j=-1;
    for (int i=0 ; i<n ; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for (int i=j+1;i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl;

}
int main()
{
    vector<int> arr={1,2,0,3,0,4,4,5,5,0,0,0,0,3};
    move(arr);
}