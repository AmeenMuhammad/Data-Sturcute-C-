#include <iostream>
using namespace std;

bool hasDuplicate(int arr[], int n) {

    const int MAX = 100;  // Range limit for values
    bool seen[MAX] = {false};

    cout << "Dry Run Trace:\n";

    for (int i = 0; i < n; i++) {
        int current = arr[i];
        cout << "i = " << i << ", arr[i] = " << current;

        // Check bounds
        if (current < 0 || current >= MAX) {
            cout << " => [Error: Out of bounds]\n";
            continue;
        }

        if (seen[current]) {
            cout << " => seen[" << current << "] = true => Duplicate Found!\n";
            return true;
        }

        seen[current] = true;
        cout << " => seen[" << current << "] set to true\n";
    }

    cout << "No duplicates found.\n";
    return false;
}

int main() {
    int arr[] = {1, 4, 2, 3, 12, 5, 6, 9, 10, 3, 5, 7, 4};  // 4 is a duplicate
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nResult: ";
    cout << (hasDuplicate(arr, n) ? "Yes (Duplicates Exist)" : "No (All Unique)") << endl;

    return 0;
}
