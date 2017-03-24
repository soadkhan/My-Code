#include<iostream>
using namespace std;
class cor{
	int x,y;
	public:
		cor(int a=0,int b=0){
			x=a;
			y=b;
		}
		void show(void){
			cout<<x<<" "<<y<<endl;
		}
		cor operator -- ();
};

cor cor::operator -- ()
{
	--x;
	--y;
	return *this;
}

int main(void)
{
	cor a(3,2);
	--a;
	a.show();
	--a;
	a.show();
	return 0;
}
