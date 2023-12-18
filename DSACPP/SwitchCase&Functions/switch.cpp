#include <iostream> 
using namespace std;

int main () {
 int ch = '2';
 switch (ch) {
 case 1: cout << "First" <<endl;
         break;

case '2' : cout << "Second" <<endl;
         break; 
 case 2: cout << "Second" <<endl;
         break;

 default: cout << "Default" <<endl;
          break;
 } 
}