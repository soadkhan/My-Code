#include<iostream>
using namespace std;

class father{
	public:
		int land;
	private:
		int hidden;
	public:
		void set_hi(int a){
			hidden = a;
		}
		void show_hi(void){
			cout<<"hidden is :"<<hidden<<endl;
		}
};

class son:private father{
	/*
	private:
		int land;
		void set_hi(int a){
			hidden = a;
		}
		void show_hi(void){
			cout<<"hidden is :"<<hidden<<endl;
		}
	*/
	public:
	void set_land(int a){
		land = a ;
	}
	void show_land(void){
		cout<<"land is :"<<land<<endl;
	}
};

int main(){
	son name;
	name.set_land(100);
	name.show_land();
	return 0;
}
