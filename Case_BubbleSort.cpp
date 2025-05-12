#include <iostream>
#include <string> 
#include <algorithm>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

const int SIZE = 10;

string names[SIZE];
int ids[SIZE];
int Scores[SIZE];

int readFile(string BubbleSortFile){

  
    ifstream Myfile(BubbleSortFile);

    if (!Myfile)
    {
        cout << "Error Can't Read files \n";
        exit(1);
    }
    

    string line;
    int index = 0;

    while (getline(Myfile,line) && index < SIZE)
    {
        stringstream ss(line);

        string name, idstr, scoreStr;
        getline(ss, name, ',');
        getline(ss, idstr, ',');
        getline(ss, scoreStr, ',');

        names[index] = name;
        ids[index] = stoi(idstr);
        Scores[index] = stoi(scoreStr);
        index++;

        cout << "Reading line: " << line << endl;
        cout << "Parsed name: " << name << "ID: " << idstr << "Score: " << scoreStr << endl;
    }
    Myfile.close();
    cout <<"\nSuccessfull Read my file \n" << endl;
    return index;
}

bool ShouldSwap(int i, int j){
    
    if(Scores[i] < Scores[j])
    return true;
    if (Scores[i] == Scores[j] && names[i] > names[j])
    return true;
    
    return false;
}

void SwapRecord(int i , int j){
    
    swap(names[i], names[j]);
    swap(ids[i] , ids[j]);
    swap(Scores[i], Scores[j]);

}
// Apply DRY Principle 
void BubbleSort(int count ) {

    for (int i = 0 ; i < count;i++)
    {
        bool Swapped = false;

        for (int j = 0; j < count-1; j++)
        {
            if (ShouldSwap(j, j + 1))
            {
                SwapRecord(j, j + 1);

                Swapped = true;
            }
        }
        if(!Swapped)
        break;
    }
}

// void BubbleSortComplex(int count){
    
//     string tempName;
//     int tempID, tempScore;

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count -  1; j++)
//         {
//             if (Scores[j] < Scores[j + 1])
//             {
//                 // Swapp by score 

//                 tempScore = Scores[j];
//                 Scores[j] = Scores[j + 1];
//                 Scores[j + 1] = tempScore;

//                 tempName = names[j];
//                 names[j] = names[j + 1];
//                 names[j + 1] = tempName;

//                 tempID = ids[j];
//                 ids[j] = ids[j + 1];
//                 ids[j + 1] = tempID;
//             }
//             else if (Scores[j] == Scores[j + 1])
//             {
//                 // same Score by Sorting Name

//                 if (names[j] > names[j + 1])
//                 {
//                     tempName = names[j];
//                     names[j] = names[j + 1];
//                     names[j + 1] = tempName;

//                     tempScore = Scores[j];
//                     Scores[j] = Scores[j + 1];
//                     Scores[j + 1] = tempScore;

//                     tempID = ids[j];
//                     ids[j] = ids[j + 1];
//                     ids[j + 1] = tempID;
//                 }
//             }
//         }
//     }
// }

void PrintRecord(int count){
    
    for (int i = 0; i < count; i++)
    {
        cout << names[i] << "( " << ids[i] << ")- Score: " << Scores[i] << endl;
    }
}

int main(){
    
    int total =  readFile("BubbleSort.txt");
    cout << "Records: " << total << endl;

    BubbleSort(total);
    PrintRecord(total);

    return 0;
}