#include <iostream>
#include <string>

using namespace std;

int main(){

    int arry[5] = {5, 45, 25, 15, 50};

    // sorted arrt (bubble sort)

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; i++)
        {
            if(arry[i] > arry[j]){

                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }
    cout <<"Sorted Arry: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " "; 
    }
    cout << endl;

    // find max and min number in array

    int max = arry[0];
    int min = arry[0];

    for (int i = 0; i < 5; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        } else if (arry[i] < min)
        {
            min = arry[i];
        }
    }
    cout << "Max Arry: " << max << endl;
    cout <<"Minimum Arry: " << min << endl;

    return 0;
}
