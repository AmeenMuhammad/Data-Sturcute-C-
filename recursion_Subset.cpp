#include <iostream>
#include <string>
#include <vector>

using namespace std;

void allSubSets(vector <int> &arr, vector<int> &sets, vector <vector<int>> &getAllsets , int i){

    if (i == arr.size())
    {
        getAllsets.push_back(sets);
        return;
    }
    
    sets.push_back(arr[i]);
    allSubSets(arr, sets, getAllsets, i + 1);

    sets.pop_back();
    allSubSets(arr, sets, getAllsets, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> sets;
    vector<vector<int>> getAllsets;

    allSubSets(arr, sets, getAllsets, 0);

    for (const auto& subset : getAllsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}