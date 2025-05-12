#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int target){
    
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
    int arry[] = {2, 4, 1, 5, 6, 7, 10, 12};
    int n = 8;
    int target = 7;

    cout <<"Index No: "<< linearSearch(arry, n, target)<< endl;
    return 0;
}