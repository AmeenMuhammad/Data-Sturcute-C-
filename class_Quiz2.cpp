#include <iostream>
#include <string>

using namespace std;

void SlectionSort(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        int index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;  
            } 
        }
        swap(arr[i], arr[index]);
    }
}

void printSelctionSort(int arr[] , int n){

    cout <<"\n=========== Slection Sort ================\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {10,23, 43, 54, 65, 78, 43, 12, 2, 1,  2, 3, 5, 6,};
    int n = sizeof(arr) / sizeof(arr[0]);

    SlectionSort(arr, n);
    printSelctionSort(arr, n);

    return 0;
}