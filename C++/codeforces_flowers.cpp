#include<iostream>
using namespace std;
int main(void)
{
	long long int  arra[220000];
	long long int n,a,max,min,maxnum=0,minnum=0;
	cin>>n;
	cin>>arra[0];
	max=arra[0];
	min=arra[0];
	for(long long int i=1;i<n;i++)
	{
		cin>>arra[i];
		if(arra[i]>max)
		{
			max=arra[i];
		}
		if(arra[i]<min)
		{
			min=arra[i];
		}
	}
	if(max==min)
	{
		cout<<0<<" "<<n*(n-1)/2<<endl;
		return 0;
	}
	
	for(long long int i=0;i<n;i++)
	{
		
		if(arra[i]==max)
		{
			maxnum++;
		}
		if(arra[i]==min)
		{
			minnum++;
		}
		
	}
	
	cout<<max-min<<" "<<maxnum*minnum<<endl;
	
	
	return 0;
}
