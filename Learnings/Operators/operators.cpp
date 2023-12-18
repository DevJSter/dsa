#include <iostream> 
using namespace std;

int main () {
 int a=1, b;
 b= a++;
 int c = ++a;
 cout << b;
 cout << c;
int n;
 cin >> n;

int  sum = 0 ;
 for (int i=1; i<=n; i++) {
     sum += i;
 } cout << sum <<endl;
}