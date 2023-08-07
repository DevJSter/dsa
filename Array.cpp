#include <iostream>
using namespace std;

int main() {
    const int size = 6;  // Increased size by 1 to accommodate insertion
    int arr[size];

    cout << "Enter " << size - 1 << " elements: ";
    for (int i = 0; i < size - 1; i++) {
        cin >> arr[i];
    }

    // Insertion
    int newValue = 25;
    int insertIndex = 2;
    for (int i = size - 1; i > insertIndex; --i) {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = newValue;

    // Deletion
    int deleteIndex = 3;
    for (int i = deleteIndex; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Display the modified array
    cout << "Modified array: ";
    for (int i = 0; i < size - 2; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
