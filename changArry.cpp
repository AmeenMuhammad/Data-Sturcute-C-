#include <iostream>

using namespace std;

void changeAryy(int arr[], int n){

    cout <<"Function method \n";
    for (int i = 0; i < n; i++)
    {
        arr[i] += 2 * arr[i];
    }
    
}
int main(){
    int arr[] = {2, 4, 6, 8, 10};

    changeAryy(arr, 5);

    cout <<"Main method: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}