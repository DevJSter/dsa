#include <iostream>
using namespace std;

int left(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = 0;
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (arr[mid] == key) {
            ans =mid;
            e = mid - 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else { // Fix here
            e = mid - 1;
        }
    }

    return ans;
}

int right(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = 0;
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (arr[mid] == key) {
            ans =mid;
            s = mid + 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else { // Fix here
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    int even[10] = {1,2, 3, 3, 3, 3, 3, 3, 6, 7};
    int finalans = right(even, 10, 3) - left(even, 10, 3);
    cout << "Total Number of Occurrences of 3 is " << finalans << endl;
    return 0;
}
