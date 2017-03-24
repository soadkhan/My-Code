#include<iostream>
using namespace std;
int main(void)
{
	
	long long int arra[110000];
    long long int n,k,a,b=0;
	int fl=1;
	cin>>n>>k;
	
	for(long long int i=0;i<n;i++)
	{
		cin>>arra[i];
	}
		
	 a=arra[k-1];
	   
	
	for(long long int i=k-1;i<n;i++)
	{
		if(arra[i]!=a)
		{
			fl=0;
			break;
		}
		
	}
	
	if(fl==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	
	else
	{
		
		for(long long int i=k-2;i>=0;i--)
		{
			if(arra[i]==a)
			{
				b++;
			}
			else
			{
			//	cout<<b<<endl;
				break;
			}
		}
		cout<<k-1-b<<endl;
		
	}
	return 0;
}
