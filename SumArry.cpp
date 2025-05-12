#include <iostream>

using namespace std;

void sumArry(int arr[], int size){
    
    int sum  = 0;

    for (int i = 0; i < size; i++)
    {
        cout <<"Arry: "<< arr[i] << endl;
        sum += arr[i];
    }
    cout << "Total Sum of Arry: " << sum << endl;
}

int main(){
    int arr[10] = {5, 10, 15, 20, 30, 40, 45, 50, 55, 60};
    sumArry(arr, 10);

    return 0;
}