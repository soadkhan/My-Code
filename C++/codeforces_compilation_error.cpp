#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	long long int n,a,b;
	long long int *ara1;
	long long int *ara2;
	long long int *ara3;
	ara1=(long long int*)std::malloc(1000000*sizeof(long long int));
	ara2=(long long int*)std::malloc(1000000*sizeof(long long int));
	ara3=(long long int*)std::malloc(1000000*sizeof(long long int));
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		cin>>ara1[i];
	}
	
    for(long long int i=0;i<n-1;i++)
	{
		cin>>ara2[i];
	}
	
	for(long long int i=0;i<n-2;i++)
	{
		cin>>ara3[i];
	}
	
	for(long long int i=0;i<n-1;i++)
	{
		for(long long int j=0;j<n;j++)
		{
			if(ara2[i]==ara1[j])
			{
				ara1[j]=-1;
				break;	
			}
		}
	}
	
	for(long long int i=0;i<n;i++)
	{
		if(ara1[i]!=-1)
		{
			a=ara1[i];
			break;
		}
	}
	
	for(long long int i=0;i<n-2;i++)
	{
		for(long long int j=0;j<n-1;j++)
		{
			if(ara3[j]==ara2[i])
			{
				ara2[i]=-1;
			    break;
			}
		}
	}
	
	for(long long int i=0;i<n-1;i++)
	{
		if(ara2[i]!=-1)
		{
			b=ara2[i];
			break;
		}
	}
	
	cout<<a<<endl<<b<<endl;
	
	return 0;
}

