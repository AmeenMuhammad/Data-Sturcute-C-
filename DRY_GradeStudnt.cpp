#include <iostream>
#include <string>

using namespace std;

void printStudentsGrade(int marks[], string students[], int size){

    for (int  i = 0; i < size; i++)
    {
        if (marks[i] >= 90)
        {
            cout<< students[i] <<": " << "Grade A" << endl;
        } else if (marks[i] >= 80)
        {
            cout << students[i] <<": " << "Grade B" << endl;
        } else if (marks[i] >= 70)
        {
            cout << students[i] <<": "<< "Grade C " << endl;
        }
        else{
            cout << students[i] <<": " << "Grade D " << endl;
        }
    }
}

int main(){
     int marks[3] = {85, 90, 78};
     string students[3] = {"Ali", "Ameen", "Awais"};
     
     printStudentsGrade(marks, students, 3);

     return 0;
}