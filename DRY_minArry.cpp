#include <iostream> 
#include <string>

using namespace std;

void sortArry(int arry[], int size){

    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; i++)
        {
            if (arry[i] > arry[j])
            {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }   
        }   
    }
}

int main(){
    int arry[5] = {10, 26, 55, 30, 70};
    int max = arry[0];
    int min = arry[0];

    sortArry(arry, 5);

    cout <<"Sorted arry: "<< endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " "; 
    }
    cout << endl;

    // find max and min number in array

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
    cout << "Maximum Arry: " << max << endl;
    cout << "Minimum Arry: " << min << endl;

    return 0;
}