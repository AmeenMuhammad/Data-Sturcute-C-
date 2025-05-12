#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool SortedArry(vector <int> arry, int n){

    if (n == 0 || n == 1)
    {
        return true;
    }
    return arry[n - 1] >= arry[n - 2] && SortedArry(arry, n - 1);
}

int main(){

   vector <int> arry = {1, 2, 3, 4, 5};

   cout <<"Arry Sorted: " << SortedArry(arry, arry.size()) << endl;

   return 0;
}