#include <iostream>
#include <string>

using namespace std;

void merge(int arry[], int size){

    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; i++)

        if (arry[i] > arry[j])
        {
            temp = arry[j];
            arry[j] = arry[j + 1];
            arry[j + 1] = temp;
        }
    }
}

int main(){
    int arry[5] = {10, 20, 30, 50, 5};
    merge(arry, 5);

    cout <<" Sorted Arry: "<< endl;

    int max = arry[0];
    int min = arry[0];

    for (int i = 0; i < 5; i++)
    {
        cout << arry[i]<< " " << endl;
    }
    cout << endl;


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
    cout << "Maximum Number: "<< max <<"\n Minimum Number: "<< min << endl;

    return 0;
}