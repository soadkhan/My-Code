#include<iostream>
using namespace std;

int main(void)
{
	unsigned long int n;
	cin>>n;
	unsigned long int ex=0;
	
	while(4)
	{
		
		if(n==0)
		{
			cout<<ex<<endl;
			return 0;
		}
		
		if(n%2==1)
		{
			ex++;
			n=n-1;
		}
		
		n=n/2;
		
	}
	
	
	
	
	return 0;
}
