#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i -1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintInsertion(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {10, 2, 5, 1, 6, 81, 3, 4, 43, 56, 76, 56, 59, 44, 56, 77, 88, 89, 90, 94, 99, 8, 100, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    PrintInsertion(arr, n);

    return 0;
}