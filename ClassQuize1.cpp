#include <iostream>
#include <string>

using namespace std;
 
// Create buble sort logic 

void BubbleSortLogic(int arr[], int n){

    for (int i = 0; i < n - 1; i++)
    {
        bool index = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                index = true;
            }
            
        }
        if(!index)
        return;
    }   
}

void Printbublearry(int arr[], int n){

    cout << "Bubble Sort Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {5, 3, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSortLogic(arr, n);
    Printbublearry(arr, n);

    return 0;
}