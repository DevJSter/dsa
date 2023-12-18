//Homework 1

// #include <iostream>
// using namespace std;


// int main() {
//  int n ;
//  cin>>n;
//  int i = 1;

//  while(i<=n) {

//   int space = 2;
//   while (space <= i) {
//    cout << " ";
//    space ++;
//   }
//   int j =1;

//   while (j<=n-i+1) {
//   cout <<i;
//   j++;
//  }
//  cout<<endl;
//  i++;
//  }
// }
//OUTPUT:
// 11111
//  2222
//   333
//    44
//     5


//Homework 2

// #include <iostream>
// using namespace std;


// int main(){

//  int n;
//  int i = 1;
//  cin>>n;

//  while(i<=n) {
//   int space = 2 ;
//   while(space<=i) {
//    cout<<" ";
//    space++;

//   }
//   int j =1;
//   int k = i-j+1;

//   while (j<=n-i+1) {
//    cout<<k;
//    j++;
//    k++;
//   }
//   cout<<endl;
//   i++;
//  }
// }
//OUTPUT : 
// 1234
//  234
//   34
//    4


//Homework 3

// #include <iostream>
// using namespace std;

// int main () {

// int n;
// cin>>n;

// int i = 1;

// while (i<=n) {
//  int spaces = n-1; //Logic hai Okay!!
//  while (spaces>=i) {
//   cout<<" ";
//   spaces--;
//  }

//  int  j = 1;
//  while (j<=i) {
//   cout << i ;
//   j++;
//  }
//  cout<<endl;
//  i++;
// }


// }
//Output:
//     1
//    22
//   333
//  4444
// 55555

//homework 4

// #include <iostream>
// using namespace std ;

// int main() {
//  int n, i=1;
//  cin>>n;
//  int val = 1;

// while (i<=n) {
//  int space = n-1;
//  while (space >= i) {
//   cout << " ";
//   space--;
//  }

//  int j = 1;
//  while (j<=i) {
//   cout<< val << " ";
//   j++;
//   val++;
//  }
//  cout << endl;
//  i++;
// }

// }

//OUTPUT:
// 4 : input
//    1
//   23
//  456
// 78910


// #include <iostream>
// using namespace std;

// int main() {
//  int n ;
//  cin>>n;
//  int i =1;

//  while ( i <= n) {
//   int j1 = 1;
//   while (j1 <= n-i+1) {
//    cout << j1 << " ";
//    j1++;
//   }
//   int star1 = 1;
//   while (star1 <= i-1) {
//    cout<<"*" <<" ";
//    star1++;
//   }
//   int star2 = 1;
//   while (star2 <= i-1) {
//    cout<< "*" <<" ";
//    star2++;
//   }
//   int j2 = 1;
//   int val = n-i+1;
//   while (j2 <= n-i+1) {
//    cout << val<< " ";
//    j2++;
//    val--;
//   }
//   cout<<endl;
//   i++;
//  }
// }

//OUTPUT:
// 5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 