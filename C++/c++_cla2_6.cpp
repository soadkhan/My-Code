#include<iostream>

using namespace std;

class car{
	private:
	int price;
	int speed;
	public:
	//void set_data(int a, int b);
	void show_data(void);
	car(int a,int b);
};

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
	amar.show_data();
	return 0;
}
