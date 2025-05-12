#include<iostream>
#include<cstdlib>

using namespace std;

const int n = 10000;
const int m = 200;

void checkAbsentees(int studentIDs[], int absentees[],int n,int m) {
	
	for (int i = 0; i < m; i++) {
		int id = absentees[i];
		bool found = false;
		
		// Linear search (not in a separate function as requested)

	for (int j = 0; j < n; j++) {
			
			if (studentIDs[j] == id) {
			cout << "Absent: ID " << id << " at index " << j << endl;
			found = true;
			break;
		}
	}
	if (!found) {
	cout << "ID " << id << " not in student list.\n";
	}
}
}
void duplicate(int studentIDs[],int n){
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (studentIDs[i] == studentIDs[j]) {
				cout << "Duplicate found: ID " << studentIDs[i] << endl;
				}
			}
		}
	}
	int main(){
		int studentIDs[n];
		int absentee[m];
		for (int i = 0; i < n; i++) {
		
			studentIDs[i] = i + 1;
			}
		for (int i = 0; i < m; i++) 
		{
		
			absentee[i] = rand() % 10050;
		}
		checkAbsentees(studentIDs,absentee,n,m);
		duplicate(studentIDs,n);
	}