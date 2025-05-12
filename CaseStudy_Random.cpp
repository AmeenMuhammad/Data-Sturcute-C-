#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void generate_Random(int scores[] , int n){

    for (int i = 0; i < n; i++)
    {
        scores[i] = rand() % 101;
    }
}

void LinearSearch(int scores[], int queries[], int m, int n){
    int count = 0;

    for (int i = 0; i < m; i++)
    {
      int target = queries[i];
      for (int j = 0; j < n; j++)
      {
        if (scores[j] >= target)
        {
            count++;
        } 
      }
      cout << "Scores: " << target << " Student - with Scores " << count << endl;
    } 
}
void FlagFunction(int *score, int n){
    for (int i = 0; i < n; i++)
    {
        if (score[i] == 100)
        {
            cout << "Perfect Score " << score[i] << " " << endl;
        }   
    }
}
int main(){
    const int m = 500;
    int n = 201;
    int socres[n];
    int quareis[m] = {10, 20, 30, 32, 45, 65, 78, 23, 45, 65, 90 };

    // function call
    
    generate_Random(socres, n);
    LinearSearch(socres, quareis, n , m);
    FlagFunction(socres, n);
    
    return 0;
}