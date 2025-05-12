#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

// Normal recursive binary search
int findStudentIDRecursive(int arr[], int start, int end, int target) {
    
    if (start > end)
    return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target) 
    return mid;
    else if (arr[mid] < target)
    return findStudentIDRecursive(arr, mid + 1, end, target);
    else 
    return findStudentIDRecursive(arr, start, mid - 1, target);
}

// Iterative binary search
int findStudentIDIterative(int arr[], int size, int target) {
    
    int start = 0, end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) 
        return mid;
        else if (arr[mid] < target) 
        start = mid + 1;
        else 
        end = mid - 1;
    }
    return -1;
}

// Find all occurrences if duplicates allowed
vector<int> findAllStudentIDs(int arr[], int size, int target) {
    
    vector<int> indices;
    
    int start = 0, end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            int left = mid, right = mid;
            while (left >= 0 && arr[left] == target) {
                indices.push_back(left);
                left--;
            }
            while (right < size && arr[right] == target) {
                if (right != mid) indices.push_back(right);
                right++;
            }
            break;
        } else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return indices;
}

// Safe binary search using stack
struct State {
    int start, end;
};
int safeFindStudentID(int arr[], int size, int target) {
    
    stack<State> callStack;
    
    callStack.push({0, size - 1});
    
    while (!callStack.empty()) {
        State current = callStack.top();
        callStack.pop();
        int start = current.start;
        int end = current.end;
        if (start > end) continue;
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) callStack.push({mid + 1, end});
        else callStack.push({start, mid - 1});
    }
    return -1;
}

int main() {
    int arr[] = {1001, 1003, 1005, 1005, 1008, 1010, 1015};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1005;

    sort(arr, arr + size); // make sure sorted

    // Recursive Search
    int recResult = findStudentIDRecursive(arr, 0, size - 1, target);
    cout << "Recursive Search: Found at index " << recResult << endl;

    // Iterative Search
    int iterResult = findStudentIDIterative(arr, size, target);
    cout << "Iterative Search: Found at index " << iterResult << endl;

    // Find All Indices
    vector<int> allIndices = findAllStudentIDs(arr, size, target);
    cout << "All indices where target appears: ";
    for (int idx : allIndices) {
        cout << idx << " ";
    }
    cout << endl;

    // Safe Search using Stack
    int safeResult = safeFindStudentID(arr, size, target);
    cout << "Safe Stack-Based Search: Found at index " << safeResult << endl;

    return 0;
}
