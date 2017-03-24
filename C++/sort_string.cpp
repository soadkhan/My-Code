#include<bits/stdc++.h>
using namespace std;
void insert_pos(int ar[],int data,int pos,int &n){ // n er jonno kintu reference use korechi .. tai main e ar
	if(pos>n||pos<0) {
		cout <<" out of the array "<<endl;	
		return;
	}
	for(int i = n;i> pos ; i--){
		ar[i] = ar[i-1];
	}
	ar[pos] = data;
	n++;
}

int main(void){
	char str[100][100];
	int n;
	for(int i=0;i<n;i++)
		cin>>str[n];
	
	
	
	
	
	
	return 0;
}
