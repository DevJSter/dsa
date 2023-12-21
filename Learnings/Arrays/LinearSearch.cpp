#include <iostream>
using namespace std;

bool isPresent(int arr[], int n ,int key) {
 for(int i = 0; i < n; i++) {
  if(arr[i] == key) {
   return true;
  }
 }
 return false;
}

int main() {
 int ar[10] = {1, 2, 3, 4, 5 , 100};

 //whether 1 is present or not
isPresent(ar ,7, 1) ? cout << "Present" << endl : cout << "Not Present" << endl;

 //whether 100 is present or not

}