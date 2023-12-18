#include <iostream> 
using namespace std;

int update (int a) {
  int ans =  a * a;
  return ans ;
}

// int main () {
//   int a = 10;
//   a = update(a);
//   cout << a << endl;
//   return 0;
// }


// Fibonacci Number till n
int fibo (int n) {
  if (n==0 || n==1) {
    return n;
  }
  int ans = fibo(n-1) + fibo(n-2);
  return ans;
}

// int main() {
//  int n , a , b ;
//  cin >> n ;
 
//  int ans = fibo(n);
//  cout << ans << endl;
//  return 0;
// }

// Arithmatic progresssion (nth term finding)

int ap (int a , int d , int n) {
  if (n==1) {
    return a;
  }
  int ans = ap(a+d , d , n-1);
  return ans;
}


// int main() {
//  int a , d , n ;
//  cout << "Enter the first term , common difference and the nth term" << endl;
//  cin >> a >> d >> n ;
 
//  int ans = ap(a , d , n);
//  cout << ans << endl;
//  return 0;
// }



// Geometric Progression (nth term finding)

int gp (int a , int r , int n) {
  if (n==1) {
    return a;
  }
  int ans = gp(a*r , r , n-1);
  return ans;
}


// int main() {
//  int a , r , n ;
//  cout << "Enter the first term , common ratio and the nth term" << endl;
//  cin >> a >> r >> n ;
 
//  int ans = gp(a , r , n);
//  cout << ans << endl;
//  return 0;
// }


//Same thing with while loop

// int main() {
//  int amt ;
//  cout << "Enter the Number" <<endl;
//  cin >> amt;

//  int notes[] = {2000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1};
//  int n = sizeof(notes)/sizeof(int);

//  int i = 0;
//  while (amt > 0) {
//    int note = notes[i];
//    if (note <= amt) {
//      int count = amt/note;
//      amt = amt - count*note;
//      cout << note << " * " << count << endl;
//    }
//    i++;
//  }
//  return 0;


// }


//Same thing with switch case

#include <iostream>
using namespace std;

int main() {
    int amt;
    cout << "Enter the Number" << endl;
    cin >> amt;

    int notes[] = { 100, 50, 20, 1};
    int n = sizeof(notes) / sizeof(int);

    int i = 0;
    while (amt > 0) {
        int note = notes[i];
        if (note <= amt) {
            int count = amt / note;
            amt = amt - count * note;

            // Using switch statement to print the result
            switch (note) {
                case 2000:
                case 500:
                case 200:
                case 100:
                case 50:
                case 20:
                case 10:
                case 5:
                case 2:
                case 1:
                    cout << note << " * " << count << endl;
                    break;
                default:
                    // Handle unexpected notes (if any)
                    break;
            }
        }
        i++;
    }

    return 0;
}
