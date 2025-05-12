#include <iostream>

using namespace std;

int linearSearch(int arry[], int n, int key){

    for (int i = 0; i < n; i++)
    {
        if(arry[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int arry[] = {10, 13, 15, 30, 25, 34, 56, 67, 78, 13, 56, 16, 50, 47, 48};
    int key = 50;

    int result = linearSearch(arry, 15, key);
    if(result != -1)
    cout <<"Arry Found index " << result;
    else
    cout << "not found arry index" << endl;

    return 0;
}