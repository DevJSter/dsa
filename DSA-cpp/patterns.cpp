#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1 ;
    int j = 1;

    while (i<=n) {
    
     while (j<=n) {
      cout << i ;
      j++;
     }
     cout<<endl;
     i++;
    }
}