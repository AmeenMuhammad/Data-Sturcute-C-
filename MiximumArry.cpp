#include <iostream>

using namespace std;

void FindmiximumArry(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
    }
    cout <<"maximum arry: "<< max << endl;
}
}

int main(){
    int arr[12] = {1, 34, 14, 20, 5, 60, 8, 9, 22, 10, 15, 25};
    FindmiximumArry(arr, 12);
    return 0;
}
