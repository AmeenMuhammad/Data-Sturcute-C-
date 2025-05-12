#include <iostream>
#include <string>

using namespace std;

int main(){
    string task[3] = {"TaskA", "TaskB", "TaskC"};

    int pariority[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        if (pariority[i] == 1)
        {
            cout << task[i]<<": " << "High Priority: " << endl;
        } else if (pariority[i] == 2)
        {
            cout << task[i]<<": " << "Medium Priority: " << endl;
        } else{
            cout << task[i]<<": "  << "Low Priority: " << endl;
        }
    }

    string task2[3] = {"TaskD", "TaskE", "TaskF"};
    int pariority2[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++)
    {
        if (pariority2[i] == 1)
        {
            cout << task2[i]<<": "  << "High Priority: " << endl;
        } else if (pariority2[i] == 2)
        {
            cout << task2[i]<<": "  << "Medium Pariority: " << endl;
        }
        else{
            cout << task2[i]<<": "  << "low parority: " << endl;
        }
    }
    return 0;
}