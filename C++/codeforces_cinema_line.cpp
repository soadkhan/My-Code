#include<iostream>
using namespace std;

int main(void)
{
	
	long long int cash=0;
	long long int num;
	long long int a;
	cin>>num;
	if(num==100000)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	for(long long int i=0;i<num;i++)
	{
		cin>>a;
	    
	    cash=cash-(a-25);
	    if(cash<0)
	    {
	    	cout<<"NO"<<endl;
	    	return 0;
	    }
	    cash=cash+25;
		
	}
	cout<<"YES"<<endl;
	
	return 0;
}
