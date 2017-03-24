#include<iostream>
#include<cmath>
using namespace std;

int is_inte(long double a)
{
	
	   long int b;
	   long double c;
	   b=(long int) a;
	   c=(long double) b;
	   
	   if((a-c)>0)
	   {
	   	 return 0;
	   }
	   
	   else
	   {
	   	 return 1;
	   }
		
}

int is_prime(unsigned long long int a)
{
	
	unsigned long long int m=sqrt(a);
	for(unsigned long long int i=3;i<=m;i=i+2)
	{
		if(a%i==0)
		{
			return 0;
		}
			
	}
	
	return 1;
	
}


int main(void)
{
	unsigned long long int a,n;
	
	cin>>n;
	
	for(unsigned long long int i=0;i<n;i++)
	{
		
		cin>>a;
		
		if(a<=3)
		{
			cout<<"NO"<<endl;
		}
		
		if(a==4)
		{
			cout<<"YES"<<endl;
		}
		
		if(a>4&&a%2==0)
		{
			cout<<"NO"<<endl;
		}
		
		if(a>4&&a%2==1)
		{
			long double r;
			r=(long double)a;
			long double b;
			b=(long double)sqrt(a);
			
			if(is_inte(b)==0)
			{
				cout<<"NO"<<endl;
			}
			
			else
			{
			   unsigned long long int t;
			   t=(unsigned long long int) b;
			   	
	            if(is_prime(t)==0)
				{
					cout<<"NO"<<endl;
				}
							
				else
				{
					cout<<"YES"<<endl;
				}
				
				
			}
			
		}
		
	}
	

	return 0;
}
