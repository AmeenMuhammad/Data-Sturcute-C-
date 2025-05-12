#include <iostream>
#include <string>

using namespace std;

void InsertionSort(int arr[] , int n){

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int index = i - 1;

        while (index >= 0 && arr[index] > key)
        {
            arr[index + 1] = arr[index];
            index = index - 1;
        }
        arr[index + 1] = key;
    }
    
}

void PrintInsertion(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 3, 2, 4, 6, 7, 11, 12, 0, 12, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);
    PrintInsertion(arr, n);

    return 0;
}