#include <iostream>
#include <string> 
#include <cstdlib>

using namespace std;

bool BinarySearch(int arr[], int Size , int target){

    int left = 0, right = Size - 1;

    while (left <= right)
    {
        int mid  = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return true;
        }
        else if (arr[mid] < target)
        {
            return BinarySearch(arr, left, mid + 1);
        }
        else{
            return BinarySearch(arr, mid - 1, right);
        }
    }
}