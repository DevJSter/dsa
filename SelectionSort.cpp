#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        std::swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    printArray(arr, size);

    selectionSort(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
