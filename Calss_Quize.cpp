#include <iostream>
#include <string>

using namespace std;

bool hasDuplicate(int arr[], int n) {
    
    const int MAX = 100;  // Range limit
    bool seen[MAX] = {false};

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            return true;  // Duplicate found
        }
        seen[arr[i]] = true;
        cout<<seen[arr[i]]<<endl;
    }

    return false;  // No duplicates
}

int main() {
    int arr[] = {1, 4, 2, 3, 4};  // Duplicate = 4
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << (hasDuplicate(arr, n) ? "Yes" : "No") << endl;
    return 0;
}
