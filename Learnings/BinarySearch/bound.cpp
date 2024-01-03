#include <iostream>
using namespace std;

int firstDect(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2; // Move this line inside the loop
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (arr[mid] < key) {
            e = mid - 1;
        } else if (arr[mid] > key) {
            s = mid + 1;
        }
    }

    return ans;
}

int lastDect(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2; // Move this line inside the loop
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (arr[mid] < key) {
            e = mid - 1;
        } else if (arr[mid] > key) {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int even[5] = {1, 2, 3, 3, 5};

    cout << "First occurrence of 3 is at Index " << firstDect(even, 5, 3) << endl;
    cout << "Last occurrence of 3 is at Index " << lastDect(even, 5, 3) << endl;
    return 0;
}
