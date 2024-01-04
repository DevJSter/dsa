#include <iostream> 
using namespace std;

int getPivot(int arr[], int n) {
 int s = 0;
 int e = n-1;


 while (s<e) {
   int mid = s+(e-s)/2;
  if (arr[mid] >= arr[0]){
   s=mid+1;
  }
  else{
   e=mid;
  }
 }

 return arr[s];

}

int main () {

int arr[5] = {4,5,6,7,0};
cout << "Pivot is " << getPivot(arr, 5) << endl;


}