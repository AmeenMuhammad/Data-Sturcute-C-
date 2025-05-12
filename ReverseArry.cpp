#include <iostream>

using namespace std;

void ReverseArry(int arry[], int n){

    int start = 0, end = n-1;

    while (start < end)
    {
        swap(arry[start], arry[end]);
        start++;
        end--;
    }
}
int main(){
    
    int arry[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    ReverseArry(arry, n);

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }
    return 0;
}