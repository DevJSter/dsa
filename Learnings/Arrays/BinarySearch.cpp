#include <iostream>
using namespace std;

bool isPresent(int arr[], int n ,int key) {
 int s = 0;
 int e = n - 1;
 while(s <= e) {
  int mid = (s + e) / 2;
  if(arr[mid] == key) {
   return true;
  } else if(arr[mid] > key) {
   e = mid - 1;
  } else {
   s = mid + 1;
  }
 }
 return false;
}  

int main() {
 int ar[10] = {1, 2, 3, 4, 5 , 100};

 //whether 1 is present or not
 isPresent(ar ,7, 1) ? cout << "Present" << endl : cout << "Not Present" << endl;

 //whether 100 is present or not
 isPresent(ar ,7, 100) ? cout << "Present" << endl : cout << "Not Present" << endl;
}