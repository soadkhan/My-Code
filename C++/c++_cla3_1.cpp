#include<iostream>
using namespace std;

class myclass{
	private:
		int a;
		int b;
	public:
		void set_data(int x,int y);
		void show_data(void);
};

void myclass::set_data(int x,int y){
	a=x;
	b=y;
}

void myclass::show_data(){
	cout<<a<<" "<<b<<endl;
}

int main(){
	myclass mine, yours;
	mine.set_data(12,13);
	yours.set_data(14,15);
	mine.show_data();
	yours.show_data();
	mine=yours; // assigning one onject to another
	mine.show_data();
	yours.show_data();
	return 0;
}

