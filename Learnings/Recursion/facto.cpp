#include <iostream>
using namespace std;

int facto(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * facto(n - 1); 
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = facto(n);

    cout << "Factorial is " << fact << endl;

    return 0;
}
