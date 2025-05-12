#include<iostream>
#include<cstdlib>

using namespace std;


void generate_random(int *score, int n){
	
	for(int i=0;i<n;i++){
		score[i]=rand()%101;
	//	cout<<score[i]<<endl;
	}
}

void linear_Search(int *score, int *queries, int m, int n){
	for(int i=0;i<m;i++){
		int target= queries[i];
		int count =0;
		for(int j=0;j<n;j++){
			if(score[j]>=target){
				count++;
			}
		}
		cout<<"Query: "<< target << "\tStudent having <= score   "<< count <<endl;
	}
}

void flag(int *score, int n){
	for(int i=0;i<n;i++){
		if(score[i]==100)
		cout<<"Perfect Score"<<endl;
	}
}

int main(){
	const int n=500;
	const int m=20;
	int score[n];
	int queries[m]= {10,20,30,40,50,12,25,35,45,55,5,65,75,85,95,60,70,80,90,100};
	
	
	
	//function calling
	generate_random(score,n);
	linear_Search(score,queries,m,n);
	flag(score,n);
	return 0;
}