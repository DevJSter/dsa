#include <iostream>
using namespace std;

int printArray (int theArray[], int sizeOfArray) {
     for(int x=0; x<sizeOfArray; x++) {
         cout << theArray[x] << endl;
     }
 }

int main() {
 

 int a[3] = {1,2,3};
 int b[3] = {4,5,6};

 int c[3];

 cout << "Array a: " << endl;
 for(int i=0; i<3; i++) {
     cout << a[i] << endl;
 }

 cout << "Array b: " << endl;

 printArray(b, 3);

 return 0;

}