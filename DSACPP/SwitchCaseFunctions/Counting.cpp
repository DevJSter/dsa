#include <iostream>
using namespace std;

void printCount(int n) {
 for (int i = 0 ; i <= n ; i++ )  {
  cout << i << endl ;
 }
}

int main () {
 int n;
 cout << "Enter n: ";
 cin >> n;
 printCount(n);
}