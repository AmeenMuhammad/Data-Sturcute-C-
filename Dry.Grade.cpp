#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void GradeSystem(string students[], int marks[], int n){
    
    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 90)
        {
            cout << students[i] <<" Grade: A+ \n";
        }
        else if (marks[i] >= 80)
        {
            cout << students[i] <<" Grade: A \n";
        }
        else if (marks[i] >= 70)
        {
            cout << students[i] <<" Grade: B \n";
        }
        else if (marks[i] >= 60) 
        {
            cout << students[i] << "  Grade: C \n";
        }
        else if (marks[i] >= 50)
        {
            cout << students[i] <<" Grade: D \n";
        }
        else{
            cout <<"Grade: F!! Needs Improve Again! \n";
        }    
    }
}

int main(){
    string students[5] = { "Ali", "usman", "Azhar","Adeel","Aslam"};
    int marks[5] = { 80, 40, 70, 76, 65};

    GradeSystem(students, marks, 5);

    return 0;
}

