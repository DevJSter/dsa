#include <iostream> 
using namespace std;

// 1 - Prime no.
// 0 - Not Prime no.

bool isPrime (int n) {
   for (int i =2 ; i <=n ; i++) {
    if (n%i ==0) {
     return 0;
    }
    else {
     return 1;
    }
   }
}

int main () {

 int n;

 cin >> n;

 if (isPrime(n)) {
  cout << " The Number is Prime" << endl;
 }
 else {
  cout << "Not Prime" << endl;
 }
 
 return 0;
}