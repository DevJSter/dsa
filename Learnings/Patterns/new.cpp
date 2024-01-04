#include <iostream>
using namespace std;

// int main() {
//     int n , i=1;
//     cin>>n;
//     while (i<=n){
//      int j = i;
//      while(j <= n){
//       cout<< " ";
//       j++;
//      }
//      int k = 1;
//      int count = i;
//      while (k <= i) {
//       cout << count ;
//       k++;
//       ++count;
//      }
//      int m = 2;
//      int ct = count - 2;
//      while (m<=i) {
//       cout << ct;
//       m++;
//       ct--;
//      }
//      cout<< endl;
//      i++;
//     }

//     return 0;
// }


int main() {
  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n ; j++) {
      cout << "  ";
    }
    int count = i;
    for (int k = 1; k <= i ; k++,count++) {
      cout << count << " ";
    }
    int ele = count - 2;
    for (int j = 1; j <= i - 1; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }
  return 0;
}