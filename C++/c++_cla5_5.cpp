#include<iostream>
using namespace std;

class myclass{
	public:
		int x;
		int y;
		void set(int a,int b){
			x=a;
			y=b;
		}
		void show(void){
			cout<<x<<" "<<y<<endl;
		}
		myclass operator + (int a);
};

myclass myclass::operator +(int a){
	x+=a;
	y+=a;
	return *this;
}

int main(){
	myclass one,new_one;
	one.set(12,12);
	new_one = one + 13;
	
//	new_one = 13 + one;
	
	new_one.show();
	
	return 0;
}
