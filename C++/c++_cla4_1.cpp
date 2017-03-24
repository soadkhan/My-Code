#include<iostream>
using namespace std;

class car{
	public:
		int tire;
		int seat;
		void set_tire_seat(int a,int b){
			tire=a;
			seat=b;
		}
};

class track:public car{
	/*
		public:
		int tire;
		int seat;
		void set_tire_seat(int a,int b){
			tire=a;
			seat=b;
		}
	*/
	public:
		int load;
		void set_load(int a){
			load=a;
		}
		void show(void){
			cout<<"tire:"<<tire<<" "<<"seat:"<<seat<<" "<<"load:"<<load<<endl;	
		}
};

int main(){
	track amar;
	amar.set_tire_seat(6,2);
	amar.set_load(1000);
	amar.show();	
}

