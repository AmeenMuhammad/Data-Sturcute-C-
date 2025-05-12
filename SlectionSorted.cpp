#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void SelctionSort(int arr[] , int n){

    cout <<"Slection Sorted: \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool Swapped = false;

        for (int j = 0; j < n - i - 1; i++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                Swapped = true;
            }
        }
        if(!Swapped)
        return;
    }
}

void PrintSelction(int arr[], int n){

    for (int i = 0; i < n - 1; i++)
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

// insert Arry function

void InserArry(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
    
}

int main(){

    int arr[] = {4, 5, 2, 3, 1};
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5;

    SelctionSort(arr, n);

    PrintSelction(arr, n);

    cout <<"\ninsertion Sorted Arry: \n";
    InserArry(arr, n);
    return 0;
}