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

void fun(my &a){
	a.data=12;
}

int main(void){
	my p;
	fun(p);
	return 0;
}
