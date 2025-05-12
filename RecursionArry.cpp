#include <iostream> 
#include <algorithm>
#include <string>

using namespace std;

void merge(int arr[], int low, int mid, int high){

    int n1  = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];
    
        for(int i = 0; i < n1; i++)

        left[i] = arr[low + i];

        for (int j = 0; j < n2; j++)

        right[j] = arr[mid + 1 + j];
    
        int i = 0, j = 0, k = low;

        while (i < n1 && j < n2) {

        if (left[i] <= right[j])
            arr[k++] = left[i++];
            else
            arr[k++] = right[j++];
        }
        while(i < n1){
        arr[k++] = left[i++];
        while(j < n2)
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printArray(int arry[], int size){

    for (int i = 0; i < size; i++)
    cout << arry[i] << " ";
    cout << endl;
}

int main(){

    int arr[] = {45, 12, 5, 10, 40, 15, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout <<"Unsorted Arry: \n";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted Arry: \n";
    printArray(arr, size);

    return 0;
}