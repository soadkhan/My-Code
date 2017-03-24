#include<iostream>
using namespace std;
int main(void)
{
	long long int po=0,neg=0,n,lim,a,other,con=0;
	cin>>n>>lim;
	
	for(long long int i=0;i<n;i++)
	{
		cin>>a;
		if(a<0)
		{
			neg+=(a*-1);
		}
		else
		{
			po+=a;
		}
	}
	
	if(po==neg)
	{
		cout<<0<<endl;
		return 0;
	}
	
	other=po-neg;
	
	
	if(other<0)
	{
		other*=-1;
	}

	if(other<=lim)
	{
		cout<<1<<endl;
		return 0;
	}
	
	
	while(4)
	{
		other-=lim;
		con++;
		
		if(other<=lim)
		{
			cout<<con+1<<endl;
			return 0;
		}
		
		
	}
	
	
	return 0;
}
