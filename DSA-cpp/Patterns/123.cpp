#include <iostream>
using namespace std;


int main() {
 int n, i=1,val=1;

 cin>>n;

 while (i<=n) {

  int j = 1;

  while (j<=n) {
   cout << val << " ";
   val++;
   j++;
  }
  cout<<endl;
  i++;
 }


}