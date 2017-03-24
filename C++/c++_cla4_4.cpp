#include<iostream>
using namespace std;

class father{
	public :
		int land;
	protected :
	    int dea_jay;
	private:
		int dea_jabe_na;
	public:
		void set_na_dea(int a){
			dea_jabe_na=a;
		} 
		void show_na_dea(void){
			cout<<"na dea :"<<dea_jabe_na<<endl;
		}
};

class good_son:protected father{
	/*
	protected:
		int land;
	protected :
	    int dea_jay; 
	private:   // not access able :(
		int dea_jabe_na; // not accessab :(
	protected:
		void set_na_dea(int a){
			dea_jabe_na=a;
		} 
		void show_na_dea(void){
			cout<<"na dea :"<<dea_jabe_na<<endl;
		}
	*/
	public:
		void set_hidden(int a){
			dea_jay = a;
		}
		void show_hidden(void){
			cout<<"hidden is :"<<dea_jay<<endl;
		}
};


int main(void){
	father one;
	one.set_na_dea(100);
	one.show_na_dea();
	good_son another;
	another.set_hidden(120);
	another.show_hidden();
}
