#include <iostream>

using namespace std;

int main(){
    int number[] = {10 , -5, 30, 2, 18, 70};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (number[i] < smallest )
        // {
        //     smallest = number[i];
        // }
        smallest = min(number[i], smallest );
        largest = max(number[i], largest);
    }
    cout <<"Smallest number of:"<< smallest << endl;
    cout<<"largest number of: "<< largest << endl;
    
    return 0;

}
