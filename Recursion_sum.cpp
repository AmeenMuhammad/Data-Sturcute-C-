#include <iostream> 

using namespace std;

int SumNumber(int n){

    if(n == 1){
        return 1;
    }
    return n + SumNumber(n - 1);
}

int main(){
   int n = 15;
  cout<< "number: "<< n << "\n Sum of: " << SumNumber(n) << endl;

  return 0;
}