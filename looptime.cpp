#include <iostream>
#include <string>

using namespace std;

void printLoops(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "i: " << i << " j: " << j << endl; 
        }
        
    }
}

int main(){
    int n = 5;
    printLoops(n);
    return 0;
}