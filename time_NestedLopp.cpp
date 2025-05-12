#include <iostream>

using namespace std;

void nestloop(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout <<"number: "<< i <<" = " << j << " = "<< k << endl;
            }
            
        }
        
    }
    
}

int main(){
    int n = 5;

    nestloop(n);
    return 0;
}