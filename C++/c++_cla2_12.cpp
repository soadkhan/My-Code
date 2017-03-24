#include<iostream>
using namespace std;

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
	friend void maker(car a); // declaring as a friend
};

void maker(car a){
	cout<<a.fix<<endl; 
}

int main(){
	car my;
	my.set_fix(12);
	maker(my);
	return 0;
}
