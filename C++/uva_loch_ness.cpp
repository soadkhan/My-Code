#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>

using namespace std;

int main(void)
{
	  //freopen("uva.txt","rt",stdin);

	long int test,a,b;
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	for(long int i=0;i<test;i++)
	{
		cin>>a>>b;
		a-=2;
		b-=2;

		cout<<(((a+2)/3)*((b+2)/3))<<endl;
	}


	return 0;
}

