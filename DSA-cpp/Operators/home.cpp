#include <iostream>
using namespace std;
 
int main() {

 //operator precedence
 int a = 10, b = 4, c = 2, d = 3;
 int x = a + b * c / d;
 cout << x << endl;

 //associativity
 int y = a - b - c - d;
 cout << y << endl;

 //unary operator
 int z = -a;
 cout << z << endl;

 //increment and decrement
 int i = 10;
 cout << i++ << endl;
 cout << ++i << endl;
 cout << i-- << endl;
 cout << --i << endl;

 //assignment operator
 int j = 10;
 j += 5;
 cout << j << endl;

 //comma operator
 int k = (a, b);
 cout << k << endl;

 //ternary operator
 int l = (a > b) ? a : b;
 cout << l << endl;

 //bitwise operator
 int m = 5, n = 7;
 cout << (m & n) << endl;

 //logical operator
 int o = 5, p = 7;
 cout << (o && p) << endl;

 //relational operator
 int q = 5, r = 7;
 cout << (q > r) << endl;

 //sizeof operator
 int s = 5;
 cout << sizeof(s) << endl;

 //conditional operator
 int t = 5;
 cout << ((t > 5) ? "Greater than 5" : "Less than 5") << endl;

 //member access operator
 struct Student {
  int roll;
  string name;
 };
 Student st;
 st.roll = 1;
 st.name = "John";
 cout << st.roll << " " << st.name << endl;

 //pointer operator
 int u = 5;
 int *v = &u;
 cout << *v << endl;

 //address of operator
 int w = 5;
 cout << &w << endl;

 //dereference operator
 int x = 5;
 int *y = &x;
 cout << *y << endl;

 //scope resolution operator
 int z = 5;
 cout << ::z << endl;

 //comma operator
 int a = (5, 6);
 cout << a << endl;

 //typecast operator
 int b = 5;
 float c = (float)b;
 cout << c << endl;

 //conditional operator
 int d = 5;
 cout << ((d > 5) ? "Greater than 5" : "Less than 5") << endl;
 
 return 0;
 
}