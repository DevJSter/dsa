#include <iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i=0;i<=size;i++){
        if(arr[i] == key){
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int arr[5] = {1,5,6,8,10};
    int key = 10;


    if(find(arr,sizeof(arr),key)){
        cout<< "Element Found"<< endl;
    }
    else{
        cout<< "Not found" << endl;
    }
    return 0;
}