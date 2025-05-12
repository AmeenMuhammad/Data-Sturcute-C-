#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main(){

    const int n = 500;
    const int m = 20;
    int scores[n];
    int quareis[m] = {10, 30, 20, 15, 35, 40, 50, 60, 5, 56, 87, 56, 76, 58, 89, 100 };

    // genrate random number 

    for (int i = 0; i < n; i++)
    {
        scores[i] = rand() % 10;
    }

    for (int i = 0; i < m; i++)
    {
        int target = quareis[i];
        int count = 0;

        for (int j = 0; j < m; j++)
        {
            if (scores[j] > target)
            {
                count++;
            }
        }
        cout << " Query:" << target << "? Student with score: " << count << endl;
    }
    //identify and  flag stuudent with perfect

    for (int i = 0; i < n; i++)
    {
        if (scores[i] == 100)
        {
            cout << "Perfect Scorer: "<< scores[i] << endl;
        }
    }
    return 0;
}