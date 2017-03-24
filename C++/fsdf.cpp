#include<iostream>
using namespace std;
 int main()
{
	unsigned long long int i;
	unsigned long long int pro=1;
	cin>>i;
	if(i==0)
   	{
   		cout<<1;
		return 0;
	}
	
	else
	{
	    for(unsigned long long int k=0;k<i;k++)
		{
			pro=pro*10;
		}
		
	}
	cout<<pro;
	return 0;
}

