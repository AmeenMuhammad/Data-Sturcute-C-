#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void merge(vector <int>&arr1, vector<int>arr2,int m, int n){

    int index = m + n - 1;
    int i = m -1, j = n -1;
    
    while (i >= 0 && j >= 0) // O(m + n)
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[index--] = arr1[i--];
            //index--;
            //i--;
        }else
        {
            arr1[index--] = arr2[j--];
        }   
    }
}
void printArr(vector<int>arr1, vector<int>arr2, int n, int m){
    cout << "Array 1: \n";
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    
    
    cout <<"\nArray 2: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    
}

int main(){
    vector <int> arr1 = {1, 3, 5, 2, 4};
    vector <int>arr2 = {6, 9, 7, 10, 8};

    int m = arr1.size();
    int n = arr2.size();

    merge(arr1, arr2, m , n);
    printArr(arr1, arr2, m , n);

    return 0;
}