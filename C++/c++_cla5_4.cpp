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
		myclass operator + (myclass a);
};

myclass myclass::operator +(myclass a){
	x=x+a.x;
	y=y+a.y;
	return *this;
}

int main(){
	myclass one,other,new_one;
	one.set(12,12);
	other.set(13,13);
	new_one = one + other;
	
	new_one.show();
	
	return 0;
}
