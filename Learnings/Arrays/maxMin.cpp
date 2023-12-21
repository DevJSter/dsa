#include <iostream>
#include <climits> // Include this header for INT_MAX and INT_MIN
using namespace std;

int getMin(int arr[], int size) {
    int min = INT_MAX; // Correct initialization for minimum value
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size) {
    int max = INT_MIN; // Correct initialization for maximum value
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Entered Numbers are: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Max: " << getMax(arr, size) << endl;
    cout << "Min: " << getMin(arr, size) << endl;

    return 0; // Add a return statement at the end of the main function
}
