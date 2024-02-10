#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start)/ 2; // Calculate mid inside the loop

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start)/ 2;
    }

    return -1; 
}

int main() {
    int arrEven[] = {13, 19, 27, 34, 56, 64};
    int arrOdd[] = {13, 19, 27, 34, 56};

    int oddIndex = binarySearch(arrOdd, 5, 27);
    int evenIndex = binarySearch(arrEven, 6, 64);
    cout << "The index of the key is : " << evenIndex << endl;

    return 0; 
}
