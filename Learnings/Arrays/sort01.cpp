#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
 for (int i = 0; i < n; i++) {
  cout << arr[i] << " ";
 }
 cout << endl;
}

void sortOneZero(int arr[] , int n) {

 int left = 0;
 int right = n - 1;
 while(left < right) {
  while(arr[left] == 0 && left < right) {
   left++;
  }
  while(arr[right] == 1 && left < right) {
   right--;
  }
  if(left < right) {
   arr[left] = 0;
   arr[right] = 1;
   left++;
   right--;
  }
 }
}

int main() {
 int arr [8] = {1,0,1,0,1,0,1,0};

 sortOneZero(arr, 8);
 printArray(arr, 8);
 return 0;
}