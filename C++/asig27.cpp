#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

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
	
	friend co operator ++ (co a);
	
	
};


co operator ++ (co a)
{
	 co temp;
	 
	 temp.x=a.x + 1;
	 
	 temp.y=a.y + 1;
	 
	 return temp;
	
}

int main(void)
{
	
	co my(1,2),test;
	
	test=++my;
	
	test.display();
	
	return 0;
}

