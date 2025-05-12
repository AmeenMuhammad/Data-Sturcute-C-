#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void DisplayArry(int scores[], int n, int step = - 1){

    if(step != - 1)
    cout << "Step " << step << ": " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << scores[i] << "  ";
    }
    cout << endl;
}

void insertionSort(int scores[], int n){

    for (int i = 1; i < n; i++)
    {
        int key = scores[i];
        int j = i - 1;
        
        while (j >= 0 && scores[j] > key){
            scores[j + 1] = scores[j];
            //j = j - 1;
            j--;
        }
        scores[j + 1] = key;

        DisplayArry(scores, n , i);
    }
}

void PrintInsertion(int scores[], int n){

    cout << "Sorted Score: " << endl;
    DisplayArry(scores, n);
}

int main(){

    int scores[10] = {15, 20, 45, 65, 10, 5, 50, 60, 55, 70};
   // int n = sizeof(scores) / sizeof(scores[0]);
    int n = 10;
    DisplayArry(scores, n);
    insertionSort(scores, n);
    PrintInsertion(scores , n);

    return 0;
}