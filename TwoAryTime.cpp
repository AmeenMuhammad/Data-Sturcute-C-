#include <iostream>

using namespace std;

void twoArry(int arry1[], int n, int arry2[], int m){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout <<"i: " << arry1[i] << "   j: " << arry2[j]<< endl;
        }   
    }
}

int main(){
    int arry1[5] = {1, 2, 3, 4, 5 };
    int arry2[5] = {6, 7, 8, 9, 10 };
    
    cout << "Two Array Time Complexity O(n*m)" << endl;
    cout << "n = 5, m = 5" << endl;

    twoArry(arry1, 5, arry2, 5);
    return 0;
}