#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;

void InsertionSort(int Scores[], int n){

    for (int i = 1; i < n; i++)
    {
        
        int key = Scores[i];
        int j = i - 1;

        if(j >= 0 && Scores[j] > key){
            
            while (j >= 0 && Scores[j] > key){

            Scores[j + 1] = Scores[j];
            j = j - 1;
            //j--;
        }

        Scores[j + 1] = key;
    } else
    {
        Scores[j + 1] = key;
    }
    
        cout <<"Step: " << i <<": \n";
        
        for (int k = 0; k < n; k++){
            cout << Scores[k] << " ";
        }
        cout << endl;
    }
}

void PrintInsertionSort(int Scores[], int n){
    
    cout << "Sorted Score:  " << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << Scores[i] << " ";
    }
    cout << endl;
}

int main(){

    int Scores[10] = {75, 60, 98,90, 89, 55, 50, 80, 95, 25};
    int n = 10;

    InsertionSort(Scores, n);
    PrintInsertionSort(Scores, n);
    return 0;
}