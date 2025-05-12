#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int start, int end){

    int index = start - 1, pivat = arr[end];

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivat)
        {
            index++;
            swap(arr[j], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}

void QuickSort(vector <int>&arr, int start, int end){

    if (start < end)
    {
        int pivat = partition(arr, start, end);

        QuickSort(arr, start, pivat -1 );
        QuickSort(arr, pivat + 1, end);
    }
}

int main(){

    vector<int> arr = {10, 5, 1, 3, 7, 9, 6, 8, 4, 2};

    QuickSort(arr, 0, arr.size()-1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}