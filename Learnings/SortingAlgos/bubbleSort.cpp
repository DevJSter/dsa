#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
   for (int i=1 ; i<n; i++){
       
       for (int j=0 ; j<n-i; j++)
       if(arr[j] > arr[j+1]) {
           swap(arr[j],arr[j+1]);
       }
   }
}

void main(){
    vector<int> arr = {5,4,3,2,1};
    bubbleSort(arr,5);
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}