#include <iostream>
using namespace std;

int getMax( int arr[] , int size) {
 int max = INT_MIN ;
 for (int i =0 ; i <= size ; i++) {
  if (arr[i] > max) {
   max = arr[i];
  }
  return max;
 }
}

int main() {

 int size;
 cin >> size;

 int arr[100];
 
 for (int i=0; i<size; i++) {
     cin >> arr[i];
 }

 for (int i = 0; i<size ; i++) {
  cout << arr[i] << endl;
 }

 cout << "Max: " << getMax(arr, size) ;

}