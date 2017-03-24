#include<iostream>

using namespace std;

class myclass{
	private:
	int num;
	int num1;
	public:
	void set_data(int a, int b);
	void show_data(void);
};

void myclass::show_data(void){
	cout<<num<<" "<<num1<<endl;
}

void myclass::set_data(int a,int b){
	num=a;
	num1=b;
}

int main(){
	myclass m;
	//cin>>m.num>>m.num1;
	//cout<<m.num<<" "<<m.num1;
	m.set_data(1,2);	
	m.show_data();
	return 0;
}
