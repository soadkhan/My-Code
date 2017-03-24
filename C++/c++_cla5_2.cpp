//this program does not run..because this is ambiguous .try to understand why it is ambiguous
#include<iostream>
using namespace std;

double add(double i,double j){
	double sum;
	sum=i+j;
	return sum;
}
/*
double add(double i,double j){
	double sum;
	sum=i+j;
	return sum;
}
*/

float add(double i,double j){
	double sum;
	sum=i+j;
	return sum;
}

int main(){
	cout<<add(4.3,5.6)<<endl;//this is ambiguous bcz difference between two add function only in return type
	return 0;
}
