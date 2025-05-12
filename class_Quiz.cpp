#include <iostream>
#include <string>

using namespace std;

int TwoloopSum(int arr[], int n , int k){

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
            
        }
        
    }
    return count;    
}

int main(){

    int arr[] = {10, 2, 3, 5, 8, 6, 9, 7, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << "Count of Pairs: " << TwoloopSum(arr, n, k) << endl;

    return 0;
}