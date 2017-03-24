#include<sstream>
#include<iostream>
#include<cstring>
#incl
using namespace std;

int main(void){
	char ara[100];
	gets(ara);
	int n=0,a;
	stringstream ab(ara);
	while(ab>>a){
		n++;
	}
	
	
	cout<<n;
	cin>>a;
}
