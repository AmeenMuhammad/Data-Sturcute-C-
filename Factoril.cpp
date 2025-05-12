#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sum(int n){

    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int main(){ 

    cout <<"Factorial: " << sum(4) << endl;

    return 0;
}