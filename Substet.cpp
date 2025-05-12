#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;


void PresentSubset(vector<int>& subset, vector<int>& arry, int i) {
    
    if(i == arry.size()) {
        
        cout <<"{ ";
        for (int value : subset) {
            cout << value << " ";
        }
        cout <<"}" << endl;
        return;
    }

    // Include the current element
    subset.push_back(arry[i]);
    PresentSubset(subset, arry, i + 1);

    // Exclude the current element
    subset.pop_back();
    PresentSubset(subset, arry, i + 1);
}

int main(){
    
    vector <int> arry = {1, 2, 3, 4, 5};
    int i = 0;
    vector <int> subset;

    PresentSubset(subset, arry, i);

    return 0;
}
 
    
