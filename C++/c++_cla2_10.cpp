#include<iostream>
using namespace std;

class maker;

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
	friend class maker; // declaring as a friend
};

class maker{
	public:
		void show_f(car a){
			cout<<a.fix<<endl;
		}
};

int main(){
	 car my;
	 my.set_fix(12);
	 my.show_fix();
	 maker super;
	 super.show_f(my);
	return 0;
}
