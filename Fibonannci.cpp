#include <iostream>
#include <string>

using namespace std;

int fibonanci(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonanci(n - 1) + (n - 2);
}

int main(){
    
    cout << "Number Tree: " << fibonanci(5) << endl;

    return 0;
}