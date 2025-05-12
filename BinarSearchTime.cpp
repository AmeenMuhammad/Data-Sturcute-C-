#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int binarySearch(int arry[], int n, int key){

    int left = 0, right = n- 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arry[mid] > key)
            cout<<"Element found at index: " <<mid << endl;
            left = mid + 1;
        if(arry[mid] < key)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
    cout<<"element not Found: " << endl;
}

int main(){
    int arr[] = {1, 2, 9, 6, 7, 5, 10};
    int key = 9;

    binarySearch(arr, 7, key);

    return 0;
}