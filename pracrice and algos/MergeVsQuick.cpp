//1.For Only 100 Numbers 
// We couldn't get the comparison in miliseconds due to less numbers thats why the second program has number upto 1000 Random Numbers Generated and then sorted!!!!

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <chrono>
// #include <random>

// using namespace std;
// using namespace std::chrono;

// // Function prototypes
// void merge(vector<int>& arr, int left, int mid, int right);
// void mergeSort(vector<int>& arr, int left, int right);
// int partition(vector<int>& arr, int low, int high);
// void quickSort(vector<int>& arr, int low, int high);

// int main() {
//     const int arraySize = 50;
//     vector<int> arr(arraySize);

//     // Generate 50 random numbers between 1 and 100 (inclusive)
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<int> dist(1, 100);

//     cout << "Randomly generated numbers: ";
//     for (int i = 0; i < arraySize; ++i) {
//         arr[i] = dist(gen);
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Make a copy of the array for both sorting algorithms
//     vector<int> arrMergeSort = arr;
//     vector<int> arrQuickSort = arr;

//     // Merge Sort
//     auto startMergeSort = high_resolution_clock::now();
//     mergeSort(arrMergeSort, 0, arraySize - 1);
//     auto stopMergeSort = high_resolution_clock::now();
//     auto mergeSortTime = duration_cast<microseconds>(stopMergeSort - startMergeSort).count();

//     // Quick Sort
//     auto startQuickSort = high_resolution_clock::now();
//     quickSort(arrQuickSort, 0, arraySize - 1);
//     auto stopQuickSort = high_resolution_clock::now();
//     auto quickSortTime = duration_cast<microseconds>(stopQuickSort - startQuickSort).count();

//     // Display sorted arrays
//     cout << "Merge Sort Result: ";
//     for (int num : arrMergeSort) {
//         cout << num << " ";
//     }
//     cout << endl;

//     cout << "Quick Sort Result: ";
//     for (int num : arrQuickSort) {
//         cout << num << " ";
//     }
//     cout << endl;

//     // Display time taken by each sorting algorithm
//     cout << "Time taken by Merge Sort: " << mergeSortTime << " microseconds" << endl;
//     cout << "Time taken by Quick Sort: " << quickSortTime << " microseconds" << endl;

//     return 0;
// }

// void merge(vector<int>& arr, int left, int mid, int right) {
//     int leftSize = mid - left + 1;
//     int rightSize = right - mid;

//     vector<int> leftArr(leftSize);
//     vector<int> rightArr(rightSize);

//     for (int i = 0; i < leftSize; ++i) {
//         leftArr[i] = arr[left + i];
//     }
//     for (int j = 0; j < rightSize; ++j) {
//         rightArr[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;

//     while (i < leftSize && j < rightSize) {
//         if (leftArr[i] <= rightArr[j]) {
//             arr[k] = leftArr[i];
//             ++i;
//         } else {
//             arr[k] = rightArr[j];
//             ++j;
//         }
//         ++k;
//     }

//     while (i < leftSize) {
//         arr[k] = leftArr[i];
//         ++i;
//         ++k;
//     }

//     while (j < rightSize) {
//         arr[k] = rightArr[j];
//         ++j;
//         ++k;
//     }
// }

// void mergeSort(vector<int>& arr, int left, int right) {
//     if (left >= right) {
//         return;
//     }

//     int mid = left + (right - left) / 2;
//     mergeSort(arr, left, mid);
//     mergeSort(arr, mid + 1, right);
//     merge(arr, left, mid, right);
// }

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;

//     for (int j = low; j < high; ++j) {
//         if (arr[j] <= pivot) {
//             ++i;
//             swap(arr[i], arr[j]);
//         }
//     }

//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pivot = partition(arr, low, high);
//         quickSort(arr, low, pivot - 1);
//         quickSort(arr, pivot + 1, high);
//     }
// }


//2.For Random Thousand Numbers

#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;

// Function prototypes
void merge(vector<int>& arr, int left, int mid, int right);
void mergeSort(vector<int>& arr, int left, int right);
int partition(vector<int>& arr, int low, int high);
void quickSort(vector<int>& arr, int low, int high);

int main() {
    const int arraySize = 1000;
    vector<int> arr(arraySize);

    // Generate 1000 random numbers between 1 and 1000 (inclusive)
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 1000);

    cout << "Randomly generated numbers: ";
    for (int i = 0; i < arraySize; ++i) {
        arr[i] = dist(gen);
        cout << arr[i] << " ";
    }
    cout << endl;

    // Make a copy of the array for both sorting algorithms
    vector<int> arrMergeSort = arr;
    vector<int> arrQuickSort = arr;

    // Merge Sort
    auto startMergeSort = high_resolution_clock::now();
    mergeSort(arrMergeSort, 0, arraySize - 1);
    auto stopMergeSort = high_resolution_clock::now();
    auto mergeSortTime = duration_cast<microseconds>(stopMergeSort - startMergeSort).count();

    // Quick Sort
    auto startQuickSort = high_resolution_clock::now();
    quickSort(arrQuickSort, 0, arraySize - 1);
    auto stopQuickSort = high_resolution_clock::now();
    auto quickSortTime = duration_cast<microseconds>(stopQuickSort - startQuickSort).count();

    // Display sorted arrays
    cout << "Merge Sort Result: ";
    for (int num : arrMergeSort) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Quick Sort Result: ";
    for (int num : arrQuickSort) {
        cout << num << " ";
    }
    cout << endl;

    // Display time taken by each sorting algorithm
    cout << "Time taken by Merge Sort: " << mergeSortTime << " microseconds" << endl;
    cout << "Time taken by Quick Sort: " << quickSortTime << " microseconds" << endl;

    return 0;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    vector<int> leftArr(leftSize);
    vector<int> rightArr(rightSize);

    for (int i = 0; i < leftSize; ++i) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < rightSize; ++j) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    while (i < leftSize) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < rightSize) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
} 

//Output of 2nd Program:
//Time taken by Merge Sort: 1219 microseconds
//Time taken by Quick Sort: 0 microseconds
