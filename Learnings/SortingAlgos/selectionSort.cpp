#include <bits/stdc++.h> 
using namespace std;  // Don't forget to include this line

void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Fix typo: should be 'i', not '1'

        for(int j = i + 1; j < n; j++) {  // Fix typo: change ',' to ';'
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);  // Add a semicolon at the end
    }
}

int main() {
    // Example usage:
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    selectionSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
