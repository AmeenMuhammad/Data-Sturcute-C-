#include <iostream>
#include <string>

using namespace std;

void TimeComplexity(int arry[], int size){

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum += arry[i];
        product *= arry[i];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     product *= arry[i];
    // }
    cout << "Sum of:   " << sum << endl;
    cout << "product of:   "<< product << endl;
}

int main(){
    int arry[] = {1, 4, 2, 3, 5};
    int size = 5;
    TimeComplexity(arry, size);
    return 0;
}