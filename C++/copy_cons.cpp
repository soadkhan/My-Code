#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;

class str{
	public:
///		int a=5;
		char* p;
		void put()
		{
			cout<<p<<endl;
		}
		str()
		{
			p = new char[100];
		}
		str(str& a);
	
};

str::str(str& a)
{
	p=new char[100];
	strcpy(p,a.p);
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	str my;
	strcpy(my.p,"soad khan");
	my.put();
	
	
	str jony = my;
	jony.put();
	
	
	strcpy(my.p,"only khan");
	my.put();
	jony.put();
	
	
	return 0;
}

