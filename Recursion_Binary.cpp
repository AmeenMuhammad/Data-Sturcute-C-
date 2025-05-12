#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;

int binarySearch(int arry[], int target, int start , int end){

    if (start <= end)
    {
        int mid = start + end - start / 2;

        if (arry[mid] == target )
        {
            return mid;
        }
        else if (arry[mid] >= target )
        {
            return binarySearch(arry, target, mid + 1, end);
        }
        else
        {
            return binarySearch(arry, target , start , mid - 1);
        }
    }
    return - 1;    
}

int main(){

    int arry[] = {1, 4, 2, 13, 4, 6};
    int Size = 6;
    int target = 6;
    int start = 0, end = Size - 1;

    cout <<"Binary Search: " << binarySearch(arry, target, start, end) << endl;

    return 0;
}