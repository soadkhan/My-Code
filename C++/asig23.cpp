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
	
	   co operator + (co a);
	   co operator - (co a);
	   co operator * (co a);
	   co operator / (co a);
	
	
};

/*********
return_type<>class<>::operator<>overloadable_operator<>(parameter_list)
{
}
*********/

co co::operator + (co a)
{

	x+=a.x;
	y+=a.y;
	
	return *this;
}

co co::operator - (co a)
{
	x-=a.x;
	y-=a.y;
	return *this;
}

co co::operator * (co a)
{
	x*=a.x;
	y*=a.y;
	return *this;
}

co co::operator / (co a)
{
	x/=a.x;
	y/=a.y;
	return *this;
}

int main(void)
{
	
	co my_one(2,4),my_test(1,3);
	my_one.display();
	
	my_one=my_one + my_test;
		my_one.display();
	
	my_one=my_one - my_test;
		my_one.display();
	
	my_one=my_one * my_test;
		my_one.display();
	
	my_one=my_one / my_test;
		my_one.display();
			
	return 0;
}
