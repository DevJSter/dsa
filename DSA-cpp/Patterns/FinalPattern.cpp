#include <iostream>
using namespace std;


int main() {

 int n,i=1;

 cin>>n;

 while (i<=n) {
  int space = n-i;
  //Print karo spaces ko {Pahla traingle}
  while (space) {
   cout<<" ";
   space--;
  }
  //Print karao Dusra traingle
  int j =1;
  while (j<=i) {
   cout << j ;
   j++;
  }
  //Print karo Teesra traingle
  // int k = 1;
  // while (k<=i-1) {
  //  cout << i-k;
  //  k++;
  // } //Ek tarika

  //Dusra tarika
  int k = i-1;
  while (k) {
   cout << k;
   k--;
  }
  
  cout<<endl;
  i++;

 }
}