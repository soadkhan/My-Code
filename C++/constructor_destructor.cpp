#include<iostream>

using namespace std;

class table{
	
	int leg;
	
	int  area;
	
	public:
		
		void set(int a);
		
		table(int a);
		
		~table();
	
};

void table::set(int a)
{
	area=a;
}

table::table(int a)
{
	leg=a;
	
	cout<<"going on...."<<leg<<endl;
}

table::~table()
{
	cout<<area<<endl;
}

int main(void)
{
	
	table tripod(3),normal(4);
	
	tripod.set(12);
	
	normal.set(24);
	
//	cout<<"tripod leg "<<tripod.leg<<endl;
	
//	cout<<"normal leg "<<normal.leg<<endl;
	
	
	return 0;
}
