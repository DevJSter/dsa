#include <iostream>
using namespace std;

int main() {
    cout << "Enter the N: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int startnum = 8 - i;
        int num = i + 1;
        int count = num;
        for (int j = 0; j < 17; j++) {
            if (j == startnum && count > 0) {
                cout << num;
                startnum += 2;
                count--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}