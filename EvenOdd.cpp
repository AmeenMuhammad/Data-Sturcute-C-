#include <iostream>
#include <string>

using namespace std;

int main(){
    int number[10] = {20, 40, 23, 35, 27, 21, 33, 20, 18, 50};
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (number[i] % 2 == 0)
        {
            evenSum += number[i];
        }
        else
        {
            oddSum += number[i];
        }
    }
    cout <<"Sum of Even Number: " << evenSum << endl;
    cout <<"Sum of Odd Number: " << oddSum << endl;
    cout << "Difference of Even and Odd Number: " << evenSum - oddSum << endl;

    cout << "Average of Even Number: " << evenSum / 5 << endl;
    cout << "Average of Odd Number: " << oddSum / 5 << endl;

    return 0 ;
    
}