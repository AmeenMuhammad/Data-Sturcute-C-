#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void BubbleSortStudents(int names[], int scores[], int attendence[], int n){

    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n - i - 1; i++)
        {
            if (scores[j] > scores[j + 1])
            {
                swap(names[j], names[j + 1]);
                swap(scores[j], scores[j + 1]);
                swap(attendence[j], attendence[j + 1]);
            }
            else if (scores[j] == scores[j + 1])
            {
                if(attendence[j] < attendence[j + 1])
                swap(attendence[j], attendence[j + 1]);
            }
            else if (scores[j] == scores[j + 1])
            {
                if(names[j] > names[j + 1])
                swap(names[j], names[j + 1]);
            }
            
        }
        
    }
    
}

void prinSocre(int arr[], int count){

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){

    int arr[] = {5, 3, 2, 4, 1};
    int count = sizeof(arr) / sizeof(arr[0]);

    int names[] = {1, 3, 2, 4, 5};
    int attendence[5];
    int score[5];

    BubbleSortStudents(names, attendence, score, 0);

    cout << "Sorted Arry: \n";
    prinSocre(arr, count);

    return 0;
}