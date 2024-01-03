#include <iostream>
using namespace std;

int firstDect (int arr[] ,int n , int key) {

 int s = 0 , e = n - 1;
 int mid = (s + e) / 2;
 int ans = -1;
 while (s<=e) {
  if (arr[mid] == key) {
   ans =mid;
   e=mid-1;
 
  }
  else if (arr[mid] < key) {//left mein jao
   e= mid-1; 
  }
  else if (arr[mid] > key) { //Right me jao
   s= mid+1;
  }
  mid = s+ (e-s)/2;

 }
 
 return ans ;
}


int main () {
 int even[5] = {1,2,3,3,5};

 cout << "First occurence of 3 is at Index"<< firstDect(even,5,3) << endl;
 
 return 0;
}