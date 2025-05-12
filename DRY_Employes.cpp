#include <iostream>

using namespace std;

void printEmplyes(string employes[], double salries[], double bonus[]){

    for (int i = 0; i < 3; i++)
    {
        double totalSalries = salries[i] + bonus[i];
        cout <<"Employes: " << employes[i]<<": " << " total Salry:  " << totalSalries << endl;
    }
}

int main(){
    string emplolyes[3] = {"Ameen", "Ali", "Awais"};
    double salries[3] = {5000, 4000, 6000}; 
    double bonus[3] = {500, 400, 600};

    string emplolyes2[3] = {"Aslam", "Adeel", "Azhar"};
    double salreis2[3] = {7000, 8000, 9000};
    double bonus2[3] = {700, 800, 900};

    printEmplyes(emplolyes, salries, bonus);
    printEmplyes(emplolyes2, salreis2, bonus2);

    return 0;
}