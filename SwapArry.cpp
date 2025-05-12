#include <iostream>

using namespace std;

void SwapNumber(int arry[], int n){

    int start = 0, end = n - 1;

    while (start < end)
    {
        swap(arry[start], arry[end]);
        start++;
        end--;
    }
}

int main(){
    int arry[] = {1, 2, 3, 4, 5};
    int n = 5;

    SwapNumber(arry, n);

    int maximum = INT_MAX;
    int minimum = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        maximum = max(arry[i], maximum);
        minimum = min (arry[i], minimum);

        cout << arry[i] << endl;
    }
    cout<<"minimum number: "<< maximum << endl;
    cout<<" minimum number: " << minimum << endl;

    return 0;
}