//Swap alternate elements of an array

#include <iostream>
using namespace std;


void printArray(int arr[] , int size){

for (int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}

}

void swapAlternate(int arr[], int size) {
    for(int i =0 ; i < size ; i+=2) {
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }

    }
}


int main() {
    int even[10] = {2,4,6,8,10,12,14,16,18,20};
    int odd[10] = {1,3,5,7,9,11,13,15,17,19};
    
    swapAlternate(even, 10);
    printArray(even, 10);
    
    return 0;
}
