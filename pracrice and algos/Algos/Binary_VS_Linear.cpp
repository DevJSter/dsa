#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function prototypes
bool isSorted(const vector<int>& arr);
void quickSort(vector<int>& arr, int left, int right);
int binarySearch(const vector<int>& arr, int target);
int linearSearch(const vector<int>& arr, int target);

int main() {
    const int arraySize = 20;
    vector<int> arr(arraySize);

    // Input: User enters 20 integers to populate the array
    cout << "Enter " << arraySize << " integers: ";
    for (int i = 0; i < arraySize; ++i) {
        cin >> arr[i];
    }

    // Check if the array is sorted
    if (!isSorted(arr)) {
        // Sort the array using Quick Sort algorithm if it's not already sorted
        quickSort(arr, 0, arraySize - 1);
    }

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    // Binary Search
    auto start = high_resolution_clock::now();
    int binaryResult = binarySearch(arr, target);
    auto stop = high_resolution_clock::now();
    auto binaryTime = duration_cast<microseconds>(stop - start).count();

    // Linear Search
    start = high_resolution_clock::now();
    int linearResult = linearSearch(arr, target);
    stop = high_resolution_clock::now();
    auto linearTime = duration_cast<microseconds>(stop - start).count();

    // Display sorted array
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Display Binary Search result and time taken
    cout << "Binary Search: ";
    if (binaryResult != -1) {
        cout << "Element found at index " << binaryResult << endl;
    } else {
        cout << "Element not found." << endl;
    }
    cout << "Time taken for Binary Search: " << binaryTime << " microseconds" << endl;

    // Display Linear Search result and time taken
    cout << "Linear Search: ";
    if (linearResult != -1) {
        cout << "Element found at index " << linearResult << endl;
    } else {
        cout << "Element not found." << endl;
    }
    cout << "Time taken for Linear Search: " << linearTime << " microseconds" << endl;

    return 0;
}

// Check if the array is sorted
bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Quick Sort implementation
void quickSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int pivot = arr[right];
    int partitionIndex = left;

    for (int i = left; i < right; ++i) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[partitionIndex]);
            partitionIndex++;
        }
    }

    swap(arr[partitionIndex], arr[right]);

    quickSort(arr, left, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, right);
}

// Binary Search implementation
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

// Linear Search implementation
int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Element not found
}