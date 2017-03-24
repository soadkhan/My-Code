#include<iostream>
using namespace std;

class car;

class maker{
	public:
		void show_f(car a);
};

class car{
	private:
		int fix;
	public:
		void set_fix(int a){
			fix=a;
		}
		void  show_fix(){
			cout<<fix<<endl;
		}
	friend  void maker::show_f(car a);
};

void maker::show_f(car a){
	cout<<a.fix<<endl;
}

int main(){
	car my;
	my.set_fix(12);
	my.show_fix();
	maker special;
	special.show_f(my);
	 
	return 0;
}
