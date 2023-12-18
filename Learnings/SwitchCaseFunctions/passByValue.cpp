#include <iostream> 
using namespace std;

void dummy  (int x) {
  x++;
   cout << "x is " << x << endl;
}

int main () {
  int n;
  cin>>n;

  dummy(n);

  cout << "n is " << n << endl;

  return 0;
}