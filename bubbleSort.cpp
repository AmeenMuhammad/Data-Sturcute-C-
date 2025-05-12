#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void BubbleSort(int arr[], int n){

    for (int i = 0; i < n - 1; i++)
    {
        bool Swapped = false;

        for (int j = 0; j < n - i - 1; j++)
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

void Printbubble(int arr[], int n){

    cout << " Buble Sort Array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {10, 2, 3, 4, 12, 45, 65, 43, 54};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);
    Printbubble(arr, n);

    return 0;
}