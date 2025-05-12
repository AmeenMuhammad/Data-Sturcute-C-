#include <iostream>

using namespace std;

int main(){

    string employes[3] = {"Ameen", "Ali", "Awais"};
    double salries[3] = {5000, 4000, 6000};
    double bonus[3] = {500, 400, 600};

    for (int i = 0; i < 3; i++)
    {
        double totalSarlries = salries[i] + bonus[i];

        cout <<"Employes: " << totalSarlries << endl;
    }

    string employes2[3] = { "Aslam", "Adeel", "Awais"};
    
    double salries2[3] = {7000, 8000, 9000};

    double bonus2[3] = {700, 800, 900};

    for(int i = 0; i < 3; i++){

        double totalSalreies2 = salries2[i] + bonus2[i];

        cout << "Second Emplyoyes: " << totalSalreies2 << endl;
    }
    return 0;
}