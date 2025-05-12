#include <iostream>
#include <string>

using namespace std;

void printTask(string task[], int pariority[]){

    for (int i = 0; i < 3; i++)
    {
        if (pariority[i] == 1)
        {
            cout << task[i] << ": " << "High Pariority: " << endl;
        }else if (pariority[i] == 2)
        {
            cout << task[i] <<": " << "Medium Pariority: " << endl;
        }
        else{
            cout << task[i] <<": "<< "Low Pariority: " << endl;
        }
    }
}

int main(){
    string task[3] = {"TaskA", "TaskB", "TaskC"};
    int pariority[3] = {1, 2, 3};

    string task2[3] = {"TaskD", "TaskE", "TaskF"};
    int pariority2[3] = {1, 2, 3};

    printTask(task, pariority);
    printTask(task2, pariority2);

    return 0;

}