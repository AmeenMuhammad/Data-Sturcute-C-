#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void SortArry(int arr[], int n){

    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false; // use Already arry sorted to stop 

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                
                isSwapped = true;
            }
        }
        if(!isSwapped)
        return;
        //break;
    }
}

void PrintArry(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
}

int main(){

    //int arr[] = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr[] = {1, 7, 5, 2, 9, 6, 8, 10, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    SortArry(arr, n);

    cout << "Sorted Arry: \n";
    PrintArry(arr, n);

    return 0;
}