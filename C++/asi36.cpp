#include<iostream>
using namespace std;

class vehicle{
	public:
		int load;
		int pass;
};
class bus:private vehicle{
	//private:
	//int load;
	//int pass;
   public:
   	 bus(int i=0){
   	 	pass =i;
   	 }
   	 void show_p(void){
   	 	cout<<pass<<endl;
   	 }
};

class trac:private vehicle{
	//private:
	//int load;
	//int pass;
	public:
		trac(int i=0){
			load = i;
		}
		void show_l(void){
			cout<<load<<endl;
		}
};

int main(void)
{
	vehicle a;
	bus my(12);
	my.show_p();
	trac you(23);
	you.show_l();
	return 0;
}
