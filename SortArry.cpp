#include <iostream>
using namespace std;
int main() {
int arr[5] = {45, 12, 89, 34, 78};
// Sorting array (bubble sort)
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5 - 1 - i; j++) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
cout << "Sorted array: ";
for (int i = 0; i < 5; i++) {
cout << arr[i] << " ";
}
cout << endl;
// Finding max and min
int max = arr[0], min = arr[0];
for (int i = 1; i < 5; i++) {
if (arr[i] > max) {
max = arr[i];
}
if (arr[i] < min) {
min = arr[i];
}
}
cout << "Max: " << max << " Min: " << min << endl;
return 0; 
}