#include<iostream>
using namespace std;
int main(void)
{
	long long int a,b,con=1,max=1,n;
	cin>>n;
	cin>>a;
	for(long long int i=1;i<n;i++)
	{
		cin>>b;
		
		if(b>=a)
		{
			con++;
		}
		if(b<a||i==(n-1))
		{
			if(con>max)
			{
				max=con;
				con=1;
			}
		}
		a=b;
		a=b;
		a=b;
	}
	cout<<max<<endl;
	
	
	return 0;
}
