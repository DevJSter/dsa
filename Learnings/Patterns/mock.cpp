#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <=  n - row + 1; col++) {
            if (col == 1) {
                cout << row << " ";
            } else if (row == 1) {
                cout << col << " ";
            } else if (col == n - row + 1) {
                cout << n << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
