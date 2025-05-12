#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void SelectionSort(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        int index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr [index] )
            {
                index = j;
            }       
        }
        swap(arr[i], arr[index]);
    }
}

int LinearSearch(int arr[], int n, int target){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void printArry(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 3, 5, 2, 6, 4, 9, 7, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 10;

    SelectionSort(arr, n);
    printArry(arr, n);

    int result = LinearSearch(arr, n, target);

    if (result != -1)
    {
        cout << "\nFound Index No: " << result<< endl;
    }
    else
    {
        cout << "Not Found: " << result << endl;
    }
    
    return 0;
}