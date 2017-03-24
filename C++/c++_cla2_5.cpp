#include<iostream>

using namespace std;

class myclass{
	private:
	int num;
	int num1;
	public:
	void set_data(int a, int b);
	void show_data(void);
	myclass();
	~myclass();
};

void myclass::show_data(void){
	cout<<num<<" "<<num1<<endl;
}

void myclass::set_data(int a,int b){
	num=a;
	num1=b;
}

myclass::myclass(){
	cout<<"constructing"<<endl;
}

myclass::~myclass(){
	cout<<"destructing"<<endl;
}

int main(){
	myclass m,n,o;
	//cin>>m.num>>m.num1;
	//cout<<m.num<<" "<<m.num1;
	m.set_data(1,2);	
	m.show_data();
	return 0;
}
