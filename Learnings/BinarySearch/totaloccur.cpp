#include <iostream>
using namespace std;

int left(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = 0;
    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (arr[mid] == key) {
            ans++;
            e = mid - 1;
        } else if (arr[mid] < key) {
            e = mid - 1;
        } else if (arr[mid] > key) {
            s = mid + 1;
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
            ans++;
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
    int even[5] = { 3, 3, 3 , 3, 5};
    int finalans = right(even, 5, 3) + left(even, 5, 3) ;
    cout << "Total Number of Occurences of 3 is " << finalans << endl;
    return 0;
}
