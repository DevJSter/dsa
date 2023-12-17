#include <iostream>
using namespace std;

int main() {

 int n,i=1;
 cin>>n;


 while (i<=n) {
  int space = i-1;
  while (space) {
   cout<<" ";
   space--;
  }
  int j = 1;
  while(j<=n-i) {
   cout<< "*";
   j++;
  } 
  cout<<endl;
  i++;

 }
}