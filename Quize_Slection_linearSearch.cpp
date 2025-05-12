#include <iostream>
#include <string>

using namespace std;

void SelectionSort(int arr[], int n){

    cout <<"\n    Selection Sort Dry Run      \n";

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;

        cout <<"Arry Pass: " << i + 1 << ": ";

        for (int j = 0 ; j < n; j++)
        {
            cout << arr[j] << " ";
        }

        cout <<"\n";

        for (int k = i + 1; k < n; k++)
        {
            if (arr[k] < arr[index])
            {
                index = k;
            }
        }
        if (index != i) 
        {
            cout <<"Swaping: " << arr[i] << " : And " << arr[index] << "\n ";
            swap(arr[i] , arr[index]);
        }else
        {
            cout <<"Not Swaping: " << endl;
        }
    }

    cout << "\n ============ Sorted Array =============== \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n ";
}

int LinearSearch(int arr[], int n,  int target) {

    cout << "\n============ Linear Search Dry Run: ================= \n";
    for (int i = 0; i < n; i++)
    {
        cout <<"Checking Array: " << i << " : Value: " << arr[i] << "\n";

        if (arr[i] == target)
        {
            return i;
        }
        
    }
    cout << "Not Found Target" << endl;
    return -1;
}

int main(){

    int arr[] = {10, 3, 2, 5, 6, 4, 9, 7, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 7;

    SelectionSort(arr, n);
    cout << LinearSearch(arr, n, target) << endl;
    return 0;
}