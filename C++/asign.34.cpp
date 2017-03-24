#include<iostream>
using namespace std;

class base{
	int a,b;
	public:
		void set(int i,int j){
			a=i;
			b=j;
		}
		void show_ab(void){
			cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
		}
};

class derived:public base{
	//private:
	//int a,b;
	//public:
	//void set(int i,int j){
	//	a=i;
	//	b=j;
	//}
	//void show_ab(void){
	//	cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
	//}
	private:
		int special;
	public:
		void set_sp(int k){
			special=k;
		}
		void show_sp(void){
			cout<<"sp="<<special<<endl;
		}
};

int main(void)
{
	base a;
	derived b;
	b.set(1,2);
	b.show_ab();
	b.set_sp(12);
	b.show_sp();
	
	return 0;
}
