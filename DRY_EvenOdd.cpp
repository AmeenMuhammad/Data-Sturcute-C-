#include <iostream>
#include <string>

using namespace std;

void EvenOddSum(int number[], int size, int &evenSum, int &oddSum){

    evenSum = 0;
    oddSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (number[i] % 2 == 0)
        {
            evenSum += number[i];
        }else
        {
            oddSum += number[i];
        }   
    }
    
}

int main(){
    int number[10] = {10, 40, 13, 35, 50, 23, 37, 18, 29, 40};
   int evenSum = 0, oddSum = 0;

   EvenOddSum(number, 10, evenSum, oddSum);

    cout <<"Sum of Even Number: " << evenSum << endl;
    cout <<"Sum of odd Number: " << oddSum << endl;

    cout <<"Diffrence of Even and Odd number: " << evenSum - oddSum << endl;
    cout << "Average of Even Number: " << evenSum / 5 << endl;
    cout << "Average of Odd Number: " << oddSum / 5 << endl;
    cout << "Average of All Number: " << (evenSum + oddSum) / 10 << endl;

    return 0;
}