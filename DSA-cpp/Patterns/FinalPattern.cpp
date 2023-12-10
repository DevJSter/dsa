#include <iostream>
using namespace std;


int main() {

 int n,i=1;

 cin>>n;

 while (i<=n) {
  int space = n-i;
  //Print karo spaces ko
  while (space) {
   cout<<" ";
   space--;
  }
  //Print karao Pahla traingle
  int j =1;
  while (j<=i) {
   cout << j ;
   j++;
  }
  //Print karo Dusra traingle
  int k = 1;
  while (k<=i-1) {
   cout << i-k;
   k++;
  }
  cout<<endl;
  i++;

 }
}