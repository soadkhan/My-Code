#include<iostream>
using namespace std;
int main(void)
{
	unsigned long int n,a,sum=0,n2;
	
	unsigned long int ara[11000];
	
	cin>>n;
	
	for(unsigned long int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		ara[i]=sum;
	}
	
	cin>>n2;
	for(unsigned long int i=0;i<n2;i++)
	{
		
		   cin>>a;
		   
		   for(unsigned long int j=0;j<n;j++)
		   {
		   	    if(a<=ara[j])
		   	    {
		   	    	cout<<j+1<<endl;
		   	    	
		   	    	break;
		   	    }
		   	
		   }
		
	}
	
	return 0;
}
