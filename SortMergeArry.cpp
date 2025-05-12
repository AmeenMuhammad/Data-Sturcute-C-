#include <iostream>

using namespace std;

int main(){

    int arr[5] = {45, 80, 10, 5, 30};

    // sorting arry (bubble sort)

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        cout << "Sorted arry: ";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // find max and min number of arry
    
    int max = arr[0], min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }

    cout << "Max: " << max << " Min: " << min << endl;
    
    

    //int size = 5;
    // int smallest  = INT_MAX;
    // int largest = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    //     if (arr[i] > largest)
    //     {
    //         largest = arr[i];
    //     }
    // }
    // cout <<"Smallest number of: " << smallest <<endl;
    // cout <<"larget number of: "<< largest << endl;

    return 0;
}