#include <iostream> 
#include <string>

using namespace std;
int Factorial(int n){
    if (n == 0) 
    {
        return 1;
    }
   return n * Factorial(n -1);  
}
int main(){
    int n = 5;
    cout << "Factorial number is: "<< Factorial(n)<< endl;

    return 0;
}