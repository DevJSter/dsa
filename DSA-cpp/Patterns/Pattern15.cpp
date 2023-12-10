#include <iostream>
using namespace std;

int main () {
 int n; 
 cin>> n;
 int i =1;

 while (i<=n) {
  int j = 1; //For starting character of each row we typecast 'a' and then plus the n and minus i
  char ch = 'A' + n - i ; //Before logic char ch = 'A' + n -i + 2;
  while (j<=i) {
   cout <<ch << " ";
   j++;
   ch++;
  }
  cout<<endl;
  i++;
 }
}