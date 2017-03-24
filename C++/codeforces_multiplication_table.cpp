#include<iostream>
using namespace std;
int main(void)
{
	long long int n,x,con=0;
	cin>>n>>x;
	if(x>(n*n))
	{
		cout<<0<<endl ;
		return 0;
	}
	if(x%2==1)
	{
		for(long long int i=1;i<=n;i=i+2)
		{
			if(x%i==0&&(x/i)<=n)
			{
				con++;
			}
		}
		cout<<con<<endl;
		return 0;
	}
	else
	{
		for(long long int i=1;i<=n;i++)
		{
			if(x%i==0&&(x/i)<=n)
			{
				con++;
			}
		}
		cout<<con<<endl;
		return 0;
	}

	return 0;
}
