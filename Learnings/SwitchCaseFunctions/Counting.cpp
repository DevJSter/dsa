#include <iostream>
using namespace std;
//Function Signature
void printCount(int n) {
 //Function Body
 for (int i = 0 ; i <= n ; i++ )  {
  cout << i << endl ;
 }
}

int main () {
 
 int n;
 
 cout << "Enter n: ";
 
 cin >> n;
 
 
 //Function Call
 
 printCount(n);
 

 return 0;
}