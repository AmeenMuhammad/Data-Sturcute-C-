#include <iostream>

using namespace std;

void ProductAryy(int arry[], int p){

    cout <<"Number: ";
    int sum = 0;

    for (int i = 0; i < p; i++)
    {
        sum += 2 * arry[i];
    }
    cout <<"Total Sum of $ Product: "<< sum << endl; 
}

int main(){
    int arry[] = {2, 4, 6, 8, 10};
    int p = 5;

    ProductAryy(arry, p);
    return 0;
}