#include <iostream>

using namespace std;

void Reversenumber(int n){

    if (n == 1)
    {
        cout <<"1 \n";
        return;
    }
    cout<< n <<" ";
    Reversenumber(n - 1);
}
int main(){
    Reversenumber(10);
    return 0;
}