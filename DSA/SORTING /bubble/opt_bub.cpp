#include<bits/stdc++.h>
using namespace std ; 
void bubble_sort(int arr[], int n){
    for ( int i=(n-1); i>=0 ; i--){
        int didswap=0;
        for (int j=0 ; j<i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if ( didswap==0){
            break;
        }
        cout<<"runs\n";
    }
}
int main ()
{
    int n ; 
    cout<<"Enter n :"<<endl;
    cin>>n; 
    int arr[n];
    cout<<"Emter array elements:"<<endl;
    for ( int i=0 ; i<n ; i++) cin>>arr[i];
    bubble_sort(arr,n);
    for ( int i=0 ; i<n; i++) cout<<arr[i]<<" ,";
    cout<<endl;
    
    return 0;

}