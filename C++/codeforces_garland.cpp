#include<iostream>
using namespace std;

int main(void)
{
	unsigned long int n,a;
	cin>>n;
	for(unsigned long int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<1<<endl;
	
	
	
	return 0;
}
