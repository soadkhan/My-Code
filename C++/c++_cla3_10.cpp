#include<iostream>
using namespace std;

class my{
	public:
	int data;
	my(){
		cout<<"constructing"<<endl;
	}
	~my(){
		cout<<"destructing"<<endl;
	}
};

my fun(void){
	my a;
	a.data=12;
	return a;
}

int main(void){
	my p;
	p=fun();
	return 0;
}
