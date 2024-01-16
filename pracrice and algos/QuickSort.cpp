#include <iostream>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
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

    quickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
