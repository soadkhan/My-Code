#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	for(int i=1;i<=(n+1)/2;i++)
	{
		
		int k=(n-(2*i-1))/2;
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"D";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	for(int i=((n+1)/2)-1;i>0;i--)
	{
		int k=(n-(2*i-1))/2;
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"D";
		}
		for(int j=1;j<=k;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
