#include <iostream>
#include <string>

using namespace std;

int main(){
    int marks[5] = {85, 90, 78, 50, 60};
    string students[5] = {"Ameen", "Ali", "Awais", "Aslam", "Adeel"};

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] >= 90)
        {
            cout << students[i] <<": "<< "Grade A+"<< endl; 
        } else if (marks[i] >= 80)
        {
            cout << students[i] <<": "<< "Grade A: "<< endl;
        }
        else if (marks[i] >= 70)
        {
            cout << students[i] <<": " << "Grade B" << endl;
        }
        else if(marks[i] >= 60)
        {
            cout << students[i] <<": "<< "Grade C: "<< endl;
        }
        else if (marks[i] >= 50)
        {
            cout << students[i] <<": "<< "Grade D:" << endl;
        }
        else{
            cout << students[i] <<": "<< "Grade F: "<< endl;
        }
    }
    
}