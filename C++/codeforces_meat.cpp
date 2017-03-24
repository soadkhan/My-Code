#include<iostream>
using namespace std;
int main(void)
{
	
	unsigned long int n,min;
	unsigned long int ara[110000][3];
	
	cin>>n;
	
	cin>>ara[0][0]>>ara[0][1];
	
	min=ara[0][1];
	
	for(unsigned long int i=1;i<n;i++)
	{
		
		 cin>>ara[i][0]>>ara[i][1];
	}
	
	unsigned long int sum=0,sumkg=0;
	
	for(unsigned long int i=0;i<n;i++)
	{
		 
		 if(min>ara[i][1])
		 {
		 	min=ara[i][1];
		 }
		 sum=sum+ara[i][0]*min;
		
	}
	
	cout<<sum<<endl;
	
	
	return 0;
}
