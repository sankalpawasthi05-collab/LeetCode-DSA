#include<bits/stdc++.h>
using namespace std ;

//second largest element in array 

int second_largest(vector<int> &arr){
    int largest=arr[0];
    int secLargest=INT_MIN;
    for ( int i=0 ; i<arr.size();i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secLargest){
            secLargest=arr[i];
        }
    }
    if(secLargest==INT_MIN){
        return -1;
    }
    return secLargest;
}

// second smallest element in a array 

int second_smallest(vector<int> &arr){
    int smallest=arr[0];
    int sec_smallest=INT_MAX;
    for ( int i=0 ; i<arr.size();i++){
        if(arr[i]<smallest){
            sec_smallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]>smallest && arr[i]<sec_smallest){
            sec_smallest=arr[i];
        }
    }
    if (sec_smallest==INT_MAX){
        return -1;
    }

    return sec_smallest;
}

int main ()
{
    vector<int> arr={12, 34 ,2 ,34, 1 ,54,67,112,989,12,34,1,2,7,5};
    cout<<second_largest(arr)<<endl;
    cout<<second_smallest(arr)<<endl;
    return 0 ; 
}