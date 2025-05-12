#include <iostream>
#include <string>

using namespace std;

void merge(int arr[], int l, int m, int r){

    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
        for (int i = 0; i < n2; i++)
        {
            right[i] = arr[m + 1 + i];
        }
    }
    int i = 0, j = 0, k = 1;
    
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }else{
            arr[k++] = right[j++];
        }
        while(i < n1 ){
            arr[k++] = left[i++];
        }
        while (j < n2)
        {
            arr[k++] = left[i++];
        }
    }
}

void mergSort(int arr[], int l, int r){
    if (l < r)
    {
        int m = (l + r) / 2;
        mergSort(arr, l, m);
        mergSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     int left[n1], right[n2];

//     for (int i = 0; i < n1; i++)
//         left[i] = arr[l + i];

//     for (int i = 0; i < n2; i++)
//         right[i] = arr[m + 1 + i];

//     int i = 0, j = 0, k = l;  // Fix: use k = l to place in correct position

//     while (i < n1 && j < n2) {

//         if (left[i] <= right[j]) {

//             arr[k++] = left[i++];
//         } else {

//             arr[k++] = right[j++];
//         }
//     }

//     while (i < n1)
    
//         arr[k++] = left[i++];

//     while (j < n2){
//         arr[k++] = right[j++];
//     }
//     cout << "number: " << arr[k] << endl;
//     cout << "number: " << arr[j] << endl;
//     cout << "number: " << arr[i] << endl;
//     cout << "number: " << arr[l] << endl;
// }

int main(){
    int arr[5] = {10, 5, 6, 18, 20};
    int n = 5;
    mergSort(arr, 0, n);

    return 0;
}