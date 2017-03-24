#include<iostream>
using namespace std;

int main(void)
{
	
	long long int cash=0;
	long long int num;
	long long int a;
	cin>>num;

	for(long long int i=0;i<num;i++)
	{
		
		cin>>a;
	    
	    if(a==50)
	    {
	    	cash=cash-25;
	    	 if(cash<0)
	        {
	        	cout<<"NO"<<endl;
	    	    return 0;
	        }
	        cash=cash+25;
	    }
	    if(a==100)
	    {
	    	cash=cash-75;
	    	 if(cash<0)
	         {
	    	    cout<<"NO"<<endl;
	    	    return 0;
	         }
	        cash=cash+25;
	    }
	    if(a==25)
	    {
	    	cash=cash+25;
	    }
	   
		
	}
	cout<<"YES"<<endl;
	
	return 0;
}
