#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end){

    vector<int> temp;

    int i = start, j = mid + 1;
    
    while(i <= mid && j <= end){

        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    
    for (int index = 0; index < temp.size(); index++)
    {
        arr[start + index] = temp[index];
    }
}

void MergSort(vector<int>&arr, int start, int end){
    
    if(start < end){
        
        int mid = start + (end- start) / 2;
        
        MergSort(arr, start, mid);
        MergSort(arr, mid + 1, end);

        merge(arr, start, mid, end);

    }
}

int main(){
    vector<int> arr = {1, 3, 4, 2, 5, 9, 6, 7, 8, 10};

    MergSort(arr, 0, arr.size()-1);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}