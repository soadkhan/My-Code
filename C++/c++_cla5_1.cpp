#include<iostream>
using namespace std;

double add(double i,double j){
	double sum;
	sum=i+j;
	return sum;
}

int add(int i,int j){
	int sum;
	sum=i+j;
	return sum;
}

float add(float i,float j){
	float sum;
	sum=i+j;
	return sum;
}

int main(){
	cout<<add(12,23)<<endl;
	cout<<add(4.3,5.6)<<endl;
	float a=3.4,b=6.7;
	cout<<add(a,b)<<endl;
	return 0;
}

