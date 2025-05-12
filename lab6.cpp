#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int Scores[10] = {75, 60, 89, 55, 70, 95, 65, 85, 50, 80};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        int key = Scores[i];
        int j = i - 1;

        // reduntal Condition Block

        if (j >= 0 && Scores[j] > key)
        {
            while (j >= 0 && Scores[j] > key)
            {
                Scores[j + 1] = Scores[i];
                j = j - 1;
            }
            Scores[j + 1] = key;
        }else                           // Unnessary Else
        {
            Scores[j + 1] = key;
        }
        cout <<"Step: " << i << ": ";

        for (int k = 0; k < n; k++)
        {
            cout << Scores[k] << " ";
        }
        cout << endl;
    }
    cout << "Sorted Arry: \n";

    for (int i = 0; i < n; i++)
    {
        cout << Scores[i] << " ";
    }
    return 0;
}