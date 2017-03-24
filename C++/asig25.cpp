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
	
	   co operator +(co a);
	   
	   co operator +(int a);
	   
	   
	
};

co co::operator +(co a)
{
	x+=a.x;
	y+=a.y;
	
	return *this;
}

co co::operator +(int a)
{
	
	if(x<0) x*=-1;
	if(y<0) y*=-1;

	
	return *this;
}




int main(void)
{
	co my(0,0),test(-1,-1);
	
	my.display();
	my = my + test;
	my.display();
    my+(1);
	my.display();
	
	return 0;
}
