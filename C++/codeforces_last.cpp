#include<iostream>
using namespace std;
int main(void)
{
	long long int  ara[100000],n;
	
	long long int con=1,max=1;
	
	cin>>n;
	
	for(long int i=0;i<n;i++)
	{
		
		cin<<ara[i];
		
	}
	
	for(long int i=0;i<n-1;i++)
	{
		
		if(ara[i]>=ara[i+1])
		{
			
			con++;
			
		}
		
		
		
		
		
		
		
		
	}
	
	
	
	
	return 0;
}
