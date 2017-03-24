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
	//  freopen("uva.txt","rt",stdin);
	
	long int test,s,d;
	
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	
	for(long int i=0;i<test;i++)
	{
		
		cin>>s>>d;
		
		if(s==0&&d==0)
		{
			cout<<0<<" "<<0<<endl;
			continue;
		}
		
		if(s>d&&(s+d)%2==0&&(s-d)%2==0)
		{
			cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
			continue;
		}
		
		else
		{
			cout<<"impossible"<<endl;
			continue;
		}
		
	}	

	
	return 0;
}

