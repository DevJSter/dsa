#include <iostream>
using namespace std;


bool isEven (int a) {
 if (a&1) { //odd
  return 0;
  }
  else {
  return 1;
}
}

int main () {
int a;
cin >> a;

if (isEven(a)) {
 cout << "Number is Even" <<endl;
}
else {
 cout << "Number is Odd" <<endl;
}

}