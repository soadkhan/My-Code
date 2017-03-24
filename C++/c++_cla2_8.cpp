#include<iostream>

using namespace std;

class car{
	private:
	int price;
	int speed;
	static int service;
	public:
	//void set_data(int a, int b);
	void show_data(void);
	void show_ser(void);
	void set_ser(int k);
	car(int a,int b);
};

int car::service;

void car::set_ser(int k){
	service=k;
}

void car::show_ser(){
	cout<<service<<endl;
}

void car::show_data(void){
	cout<<price<<" "<<speed<<endl;
}

car::car(int a,int b){
	price=a;
	speed=b;
}

int main(){
	car amar(12,13),tumar(14,60);	
//	car ara[2]={car(1,2),car(2,3)}; 
//	amar.show_data();
	amar.set_ser(2);
	tumar.show_ser();
	return 0;
}
