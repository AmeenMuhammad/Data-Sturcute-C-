#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int SumNumber(int n){

    if (n == 0)
    {
        return 0;
    }
    return n + (SumNumber(n -1));
}

int main(){
    int n = 2;

    cout << "Sum number: " << SumNumber(n) << endl;
    return 0;
}
