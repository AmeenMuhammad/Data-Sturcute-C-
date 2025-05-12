#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SwapSets(vector<int>&arr, vector<vector<int>>&getSets, int indx){

    if (indx == arr.size())
    {
        getSets.push_back({arr});
        return;
    }
    
    for (int i = indx; i < arr.size(); i++)
    {
        swap(arr[indx], arr[i]);
        SwapSets(arr, getSets, indx + 1);
        swap(arr[indx], arr[i]); // Backtrack to restore the original state

        SwapSets(arr, getSets, indx + 1);

        swap(arr[indx], arr[i]);
    }
    
}

int main(){

    vector <int> arr = {1, 2, 3, 4, 5};
    vector <vector<int>> getSets;

    SwapSets(arr, getSets, 0);

    for (const auto& set : getSets) {
        for (int num : set) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}