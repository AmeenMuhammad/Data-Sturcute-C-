#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeAndSort(vector<int>& arr1, vector<int>& arr2) {
    // Step 1: Append all elements of arr2 into arr1
    for (int val : arr2) {

        arr1.push_back(val);
    }

    // Step 2: Sort the merged array
    sort(arr1.begin(), arr1.end());
}

void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 2, 4};
    vector<int> arr2 = {6, 9, 7, 10, 8};

    mergeAndSort(arr1, arr2);

    cout << "Merged & Sorted Array: ";
    printArray(arr1);

    return 0;
}
