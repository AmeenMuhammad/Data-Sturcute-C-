#include <iostream> 
#include <string>

using namespace std;

void employes(string employes1[], double salry[], double bonus[]){

    for (int i = 0; i < 3; i++)
    {
        double totalSalry = salry[i] + bonus[i];
        cout <<"Employes: " << employes1[i]<<": " << "  total Salry: " << totalSalry << endl;
    }
}

int main(){
    string employes1[3] = {"Ameen", "Adeel", "Sain"};
    double salry[3] = {1000, 1200, 20000};
    double bonus[3] = { 1000, 800, 1200}; 

    string employes2[5] = {"Ali", "Aslam", "Anwar", "Awais", "Asgher"};
    double salry2[5] = {2300, 3050, 3400, 9021, 3200};
    double bonus2[5] = {120, 308, 300, 190, 280};

    string employes3[5] = {" Hashim" , "Aijaz", "Hayat", "Qadir"};
    double salry3[5] = {1030, 1280, 9081, 2981.022 , 3990.02};
    double bouns3[5] = {220.12, 210.00, 214.09, 45.00, 34.00};

   employes(employes1, salry, bonus);
   employes(employes2, salry2, bonus2);
   employes(employes3, salry3, bouns3);

    return 0;
}