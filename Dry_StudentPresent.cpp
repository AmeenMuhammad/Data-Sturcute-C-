#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int m = 1000;
const int n = 200;

int StudentID[n];
int Absentees[m];

void AbsentStudents(int n , int m, int StudentID[], int Absents[]){

    for (int i = 0; i < m; i++)
    {
        int id = Absents[i];
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (StudentID[j] == id)
            {
                cout << "Absent ID: " << id << "At Index: " << j << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "ID: " << id << "Not present in stdunet list: \n" << endl;
        }
        
    }   
}

void PresentStudent(int m, int n , int StudentID[], int Absent[]){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (StudentID[i] == StudentID[j])
            {
                cout << "Duplicat id found: " << StudentID[i] << endl;
            }
            
        }
        
    }
    
}

int main(){
    
    for( int i = 0 ; i < n; i++){
        StudentID[i] = i + 1;
    }
    for (int i = 0; i < m; i++)
    {
        StudentID[i] = Absentees[i] = rand()% 10050;
    }
    AbsentStudents(m, n , StudentID, Absentees);
    PresentStudent(m,n, StudentID, Absentees);
    return 0;
}