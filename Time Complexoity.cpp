#include <iostream>

using namespace std;

void printNumber(int n){
        
        while (n > 0)
        {
            cout << n << " " << endl;
            n /= 2; // divide by 2
        }
}

int main(){
    
    int n = 20;
    printNumber(n);

    return 0;
}