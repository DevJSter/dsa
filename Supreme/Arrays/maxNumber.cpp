#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 23, 5, 45, 65, 5, 54, 5454, 45, 54};
    int size = 11;

    int maxi = INT_MIN;
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum number in the array is " << maxi << endl;
    return 0;
}