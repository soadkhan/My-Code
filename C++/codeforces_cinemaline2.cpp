#include<iostream>
using namespace std;

int main(void)
{
	long long int num,cash25=0,cash50=0,a;
	cin>>num;
	for(long long int i=0;i<num;i++)
	{
		cin>>a;
		if(a==50)
		{
			if(cash25==0)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			cash25--;
			cash50++;
		}
		if(a==100)
		{
			if(cash25==0)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			if(cash50==0)
			{
				if(cash25<3)
				{
					cout<<"NO"<<endl;
				    return 0;
				}
				else cash25=cash25-3;
			}
			if(cash50!=0)
			{
				cash50--;
				cash25--;
			}
		}
		if(a==25)
		{
			cash25++;
		}
	}
	
	
		
	
	cout<<"YES"<<endl;
	
	
	return 0;
}
