#include <iostream>
using namespace std;

void update (int num[] , int n) {
 cout << "Inside the update function" << endl;
 arr[0] = 100;
 //printing here
 for(int i = 0; i < 3; i++) {
  cout << arr[i] << " ";
 }
 cout <<endl;

 cout << "Going outside of the update function" << endl; 
} 

int main() {
 int arr[3] = {1, 2, 3};

 update(arr , 3);

 //printing here
 for(int i = 0; i < 3; i++) {
  cout << arr[i] << " ";
 }

}