#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void SelctionSort(int arr[], int n){

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
        swap(arr[i] , arr[index]);
    }
}

void PrintSlection(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {10,23, 43, 54, 65, 78, 43, 12, 2, 1,  2, 3, 5, 6,};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelctionSort(arr, n);
    PrintSlection(arr, n);
    
    return 0;
}