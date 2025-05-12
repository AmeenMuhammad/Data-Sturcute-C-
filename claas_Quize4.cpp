#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;

int LinearSearch(int arr[], int n, int target){

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        
    }
    
    return -1;
}

int main(){

    int arr[] = {80, 92, 71, 101, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    
    int reuslt = LinearSearch(arr, n , target);

    if (reuslt != -1)
    {
        cout << "Elemet Found at Index No: " << reuslt << endl;
    }else
    {
        cout << "Not found element: " << reuslt << endl;
    }
    
    
    //cout <<"Search Arry: " << LinearSearch(arr, n, target) << endl;;

    return 0;
}