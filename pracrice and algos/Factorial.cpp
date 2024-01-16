#include <iostream>

using namespace std;

unsigned long long int factorialIterative(int n) {
    unsigned long long int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

unsigned long long int factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factorial using iterative approach: " << factorialIterative(num) << endl;
    cout << "Factorial using recursive approach: " << factorialRecursive(num) << endl;

    return 0;
}
