#include<iostream>
using namespace std;
class my{
	int a;
	public:
		my(int x){
			a=x;
		}
		void show(void){
			cout<<a<<endl;
		}
};

void fun(my l){
	l.show();
}

int main(){
	my ami(12);
	fun(ami);
	return 0;
}
