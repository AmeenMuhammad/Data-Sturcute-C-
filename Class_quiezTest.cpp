#include <iostream> 
#include <string>
#include <unordered_map>

using namespace std;

int SolutionArry(int arr[], int n, int k){

    int count = 0;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        count += freq[k - arr[i]];
        freq[arr[i]]++;    
    }

    return count;  
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << "Count Pairs: " << SolutionArry(arr, n , k) << endl;

    return 0;
}