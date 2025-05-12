#include <iostream>

using namespace std;

int main(){

    //int arry[5] = {70, 80, 70, 45, 60};
    int size = 5;
    int marks[size];
    
    cout <<"Enter Marks of students: ";
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }

    // arry[0] = 102 , arry[3] = 85;
    // cout <<"Arry of: "<<arry[0] << endl;
    // cout <<"arry of: "<<arry[1] << endl;
    // cout<<"Arry of: "<<arry[3] << endl;
    // cout <<"arry of: "<<arry[4] << endl;

    // cout<<"\n Size of Arry: " << sizeof(arry) / sizeof(int) << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<"Size of: "<< marks[i] << endl;
    }
    
    cout <<"Sum of: "<< sum << endl;
    return 0;
}

