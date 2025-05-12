#include <iostream>
#include <string> 
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

// Normal Recursive Student ID Search

int StudentIDRecursive(int arr[], int start , int end, int target){
    
    if(start > end)
    return -1;
    
    int mid = start + (end - start) / 2;
    
    if(arr[mid] == target)
    return mid;
    
    else if(arr[mid] > target)
    return StudentIDRecursive(arr, start,  mid - 1, target);
    
    else
    return StudentIDRecursive(arr, mid + 1, end, target);
}

// Iterative Recursive Student Aryy;

int FindIterativerativeStudentID(int arry[], int size, int target){

    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start ) / 2;
        
        if(arry[mid] == target)
        return mid;
        
        else if(arry[mid] > target)
        end = mid - 1;
        else
        start = mid + 1;
    }
    return -1;
}

// Dupliacte vaalues Allowed Occurances

vector<int> DuplicateIDValue(int arry[], int size, int target){

    vector<int> result;

    int index = FindIterativerativeStudentID(arry, size, target);
    if(index == -1){
        return result;
    }
        int i = index;
        
        while(i >= 0 && arry[i] == target )
        {
            result.push_back(i);
            i--;
        }
        
        i = index + 1;

        while (i < size && arry[i] == target)
        {
            result.push_back(i);
            i++;
        }
        sort(result.begin(), result.end());
        return result;
    }

// Binary Search using Stack Method 

struct state
{
    int start , end;
};

int StackStudentID(int arry[], int size, int target){
    
    stack<state> CallStack;
    
    CallStack.push({0, size - 1});
    while(!CallStack.empty())
    {
        state Current = CallStack.top();
        CallStack.pop();

        int start = Current.start;
        int end = Current.end;

        if(start > end)
        continue;

        int mid = start + (end - start) / 2;
        
        if(arry[mid] == target)
        return mid;
        
        else if(arry[mid] > target)
        CallStack.push({start ,mid - 1});
        
        else
        CallStack.push({mid + 1, end});
    }
    return -1;
}

// main Method

int main(){

    int arry[] = {101, 205, 301, 1001, 2001, 5440, 3045, 3001, 324, 543, 786}; 
    int size = sizeof(arry) / sizeof(arry[0]);
    int target = 5440;

    // Sorted Arry
    sort(arry, arry + size);

    cout << "\n ==================================================== \n";

    for (int i = 0; i < size; i++)
    {
        cout << arry[i] << " ";
    }
    cout <<"\n ======================================================\n";
    

    // Recursive Search
    int findresultrecursive = StudentIDRecursive(arry, 0, size - 1, target);
    cout <<"Found Recursive Search index: " << findresultrecursive << endl;
    
    // Search Iterative 
    int IterativeResult = FindIterativerativeStudentID(arry, size, target); 
    cout <<"Found Iterative Search: " << IterativeResult << endl;
    // Additional Search Method
    cout << "Adding a new search method here." << endl;
    // Stack Student ID Search
    int StackResult = StackStudentID(arry, size, target);
    cout <<"Found Stack Student ID: " << StackResult << endl;

    // All indicates Find Vector Duplaicate
    vector<int>Allindicate = DuplicateIDValue(arry, size, target);
    cout <<"Found All Duplicate Indices: "<< endl;

    for(int index : Allindicate)
        cout << index <<" ";
    cout << endl;

    return 0;
}