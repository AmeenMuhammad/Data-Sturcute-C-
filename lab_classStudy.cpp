#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib> // For atoi()
#include<algorithm>

using namespace std;

const int MAX = 100;
string names[MAX];
int ids[MAX];
int scores[MAX];

// Function to read data from file
int readFile(string filename) {
    ifstream file(filename.c_str()); // Compatible with older compilers
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    int index = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, idStr, scoreStr;
        if (!getline(ss, name, ',') || !getline(ss, idStr, ',') || !getline(ss, scoreStr, ',')) {
            cerr << "Error: Malformed line in file: " << line << endl;
            exit(EXIT_FAILURE);
        }

        names[index] = name;
        ids[index] = atoi(idStr.c_str());         // Replace stoi with atoi
        scores[index] = atoi(scoreStr.c_str());   // Replace stoi with atoi
        index++;

        if (index >= MAX) {
            cerr << "Error: Exceeded maximum allowed records (" << MAX << ")" << endl;
            exit(EXIT_FAILURE);
        }
    }

    file.close();
    return index;
}

// Function to display data
void displayData(int size) {
    cout << "Name\tID\tScore\n";                           //O(n)
    cout << "---------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << "\t" << ids[i] << "\t" << scores[i] << "\n";
    }
}

// Bubble Sort by score (descending)
void swapRecords(int i, int j) {
    swap(scores[i], scores[j]);
    swap(ids[i], ids[j]);
    swap(names[i], names[j]);
}

bool shouldSwap(int i, int j) {
    if (scores[i] < scores[j])
        return true;
    if (scores[i] == scores[j] && names[i] > names[j])
        return true;

    return false;
}

void bubbleSort(int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (shouldSwap(j, j + 1)) {
                swapRecords(j, j + 1);
                swapped = true;
            }
        }
        if (!swapped)
            break; // Optimization: stop if already sorted
    }
}

// void bubbleSort(int size) {
//     for (int i = 0; i < size - 1; i++) {
//         bool swapped = false;
//         for (int j = 0; j < size - i - 1; j++) {

//             if (shouldSwap(j, j + 1)) {
//                 swapRecords(j, j + 1);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break;  // Optimization: stop if already sorted
//     }
// }


int main() {
    int n = readFile("data.csv");

    cout << "\nBefore Sorting:\n";
    displayData(n);

    bubbleSort(n);

    cout << "\nAfter Sorting (By Score Descending):\n";
    displayData(n);

    return 0;
}


// bool shouldSwap(int i, int j) {
//    if (scores[i] < scores[j]) 
// 	return true;
//    if (scores[i] == scores[j] && names[i] > names[j]) 
// 	return true; 

// }