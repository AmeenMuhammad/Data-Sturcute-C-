#include<iostream>
#include <string>

using namespace std;

int linearSearch(int arr[], int size, int target){
	int count=0;
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			cout<<"position is: "<< i+1 <<endl;
			count++;
		}
	}
	cout<<"Number occured this times "<<count;
	return count;
}
int main(){
	int arr[]={10,25,30,45,21,90,32,90,64,78,90};
	int lenghtofarray = sizeof(arr)/ sizeof arr[0];
	int target;
	cout<<"Enter the number to be searched: ";
	cin>>target;
	linearSearch(arr,lenghtofarray,target);
}