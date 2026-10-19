#include<bits/stdc++.h>
using namespace std ; 
int partition(vector<int> &arr , int low , int high)
{
    int pivot=arr[low];
    int i = low;
    int j= high ;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>=pivot&& j>= low+1){
            j--;
        }
        if ( i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j ;
}

void quickSort(vector<int> &arr, int low , int high){
    if (low<high){
        int p= partition(arr , low , high);
        quickSort(arr , low , (p-1));
        quickSort(arr,(p+1), high);
    }
}

int main ()
{
    vector<int> arr={12,13,56,1,67,98,1,90,9,8,7,67,89,9,2};
    quickSort(arr,0,arr.size()-1);

    for ( int i=0 ; i<=arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}