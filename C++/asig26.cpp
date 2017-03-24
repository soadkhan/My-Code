#include<iostream>
using namespace std;

class co{
	
	private:
		int x;
		int y;
	public:
		co(int a=0,int b=0)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
	
	friend co operator + (co a,co b);
	
	
};

co operator + (co a,co b)
{
	 co temp;
	 
	 temp.x=a.x + b.x;
	 
	 temp.y=a.y + b.y;
	 
	 return temp;
	
}


int main(void)
{
	
	co a(1,2),b(2,3);
	co test;
	
	test = a + b;
	
	test.display();
	
	return 0;
}
