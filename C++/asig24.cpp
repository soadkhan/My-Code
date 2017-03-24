#include<iostream>
using namespace std;

class co{
	
	private:
		int x;
		int y;
	public:
		co(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
	
	   co operator --(int a);
	   
	
};

co co::operator -- (int a)
{
	x--;
	y--;
	return *this;
} 



int main(void)
{
	
	co my(1,2);
	my.display();
	my--;
	my.display();
	
	return 0;
}
