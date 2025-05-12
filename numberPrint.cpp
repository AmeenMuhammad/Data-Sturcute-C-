#include <iostream>

using namespace std;

void printNumber(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<"Number of Arry: " << arr[i]<< endl;
    }
}
int main(){
    int arr[5] = {10 , 20, 30, 40, 50};
    printNumber(arr, 5);
    return 0;
}

/*time complexity: 
int arr[5] = {10, 20, 30, 40, 50}; // o(n) = constant time 
total time complexity: int 4 bytes , n * 5 , 4 * 5 = 20;
print number(arr, 5); o(n) = linear time 
space complexity: 
int arr[5] = {10, 20, 30, 40, 50,};    // o(1) = constant space
print number(arr, 5); // o(n) = linear space 

 */