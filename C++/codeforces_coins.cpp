#include<iostream>
using namespace std;
int main(void)
{
	long long int n;
	cin>>n;
	cout<<n<<" ";
	if(n==1)
	{
		cout<<endl;
		return 0;
	}
	while(4)
	{
		
		if(n%2==1) 
		{
			
           for(long long int i=3;i<=n;i++)
           {
           	
           	    if(n%i==0)
           	    {
           	    	 n=n/i;
           	    	 break;
           	    }
           	
           }
     
				
		}
		
		
		else
		{
			
	      n=n/2;		
	
		}
		
		cout<<n<<" ";
		
		if(n==1)
		{
			cout<<endl;
			return 0;
			
		}
		
		
		
	}
	
	
	return 0;
}
