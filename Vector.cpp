#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector<int> vec = {10, 12, 14, 15}; // number print arry of vector

    vector <char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};


    for (char i: vec) 
    {
        cout <<"vector "<< sizeof(vec)<<": "<< i << endl;
    }
    return 0;
}