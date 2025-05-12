#include <iostream>
#include <string>

using namespace std;

void whilellop(int n ){

    while (n > 0)
    {
        cout << "number: "  << n << endl;
        n /= 2;
    }
} 

int main(){
    int n = 20;

    whilellop(n);
    return 0;
}