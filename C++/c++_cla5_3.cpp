#include<iostream>
using namespace std;

class car{
	private:
		int price;
		int speed;
	public:
		car(){
			price = 1200000;
			speed = 60;
		}
		car(int a,int b){
			price=a;
			speed=b;
		}
		void  show(void){
			cout<<"price is :"<<price<<endl<<"speed is :"<<speed<<endl;
		}
};

int main(){
	car amar,tumar_spe(140000000,120);
	amar.show(); 
	tumar_spe.show();
	return 0;
}
