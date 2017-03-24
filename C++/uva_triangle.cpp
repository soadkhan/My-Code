
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
//	  freopen("uva.txt","rt",stdin);
	
	long long int test,ara[4];
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	
	for(long long int i=0;i<test;i++)
	{
		cin>>ara[0]>>ara[1]>>ara[2];
		sort(ara,ara+3);
		
		if(ara[0]+ara[1]>ara[2])
		{
			if(ara[0]==ara[2])
			{
				cout<<"Case "<<i+1<<": "<<"Equilateral"<<endl;
				continue;
			}
			if(ara[0]==ara[1]||ara[1]==ara[2])
			{
				cout<<"Case "<<i+1<<": "<<"Isosceles"<<endl;
				continue;
			}
			else
			{
				cout<<"Case "<<i+1<<": "<<"Scalene"<<endl;
				continue;
			}
		}
		else
		{
			cout<<"Case "<<i+1<<": "<<"Invalid"<<endl;
			continue;
		}
	}
	
	
		

	
	return 0;
}

