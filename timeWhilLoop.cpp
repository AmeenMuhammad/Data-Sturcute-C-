#include <iostream>
#include <string>

using namespace std;

void timeWhileLoop(int n ){
    int i = 1;
    while (i < n)
    {
        cout << "number: "  << i << endl;
        i *= 2;
    }
}
int main(){
    int n = 30;
    timeWhileLoop(n);
    return 0;
}