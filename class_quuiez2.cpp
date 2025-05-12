#include <iostream>
#include <string>

using namespace std;

// bool HAshDuplicate(int arr[], int n){


//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return true;
//             }
            
//         }
        
//     }
//     return false;
// }
// convert O(n) from O(n^2) two loops ,, use one loop convert 

const int MAX= 100;
bool seen[MAX] = {false};

bool FoundDuplicate(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        if (seen[arr[i]])
        {
            return true;
        }
        seen[arr[i]] = true;
        cout << seen[arr[i]] << endl;
    }
    return false;
}

int main(){

    int arr[] = {1, 2, 3, 4,2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate: " << (FoundDuplicate(arr, n)? "yes" : "no") << endl;

    return 0;
}