#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[], int target, int n){

    int start = 0;
    int end = n -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

    if (target > arr[mid])
    {
        cout <<"Element Search " << mid << endl;
        start = arr[mid + 1];
    } else if (target < arr[mid])
    {
        end = arr[mid - 1];
    }
    else{
        return mid;
    }
}
    return -1;
}

int main(){
    int arr[] = {5, 12, 4, 8, 14, 20, 25};
    int target = 25;
    int n = 7;

    cout<< BinarySearch(arr, target, n) << endl;

    return 0;
}