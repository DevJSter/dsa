#include <iostream>
using namespace std;

int main() {
 int a , b;
 char op;

 cout << "Enter the value of a" <<endl;
 cin >> a;

 cout << "Enter the value of b" <<endl;
 cin >> b;

 cout << "Enter the operation to be performed" <<endl;
 cin >> op;
 switch (op) {
  case '+' : cout << "Sum of " <<a <<" and " <<b <<" is " <<a+b <<endl;
             break;
  case '-' : cout << "Difference of " <<a <<" and " <<b <<" is " <<a-b <<endl;
             break;
  case '*' : cout << "Product of " <<a <<" and " <<b <<" is " <<a*b <<endl;
             break;
  case '/' : cout << "Quotient of " <<a <<" and " <<b <<" is " <<a/b <<endl; 
             break;
  default : cout << "Invalid operation" <<endl;
 }
}