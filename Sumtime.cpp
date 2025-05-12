#include <iostream>
#include <string>

using namespace std;

void sumTime(int n){

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    cout << "sum of: "<< sum << endl;
}

int main(){
    int n  = 10;

    sumTime(n);

    return 0;
}