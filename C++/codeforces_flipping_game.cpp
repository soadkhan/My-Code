#include<iostream>
using namespace std;
int main(void)
{
	int n,a,con1=0,i=1,j=1,max=0;
	int ara[110];
	cin>>n;
	ara[0]=1;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a==1)
		{
			con1++;
			ara[j]=i+1;
			j++;
		}
	}
	
	ara[j]=n+2;
	for(i=0;i<j;i++)
	{
		if((ara[i+1]-ara[i]-1)>max)
		{
			max=ara[i+1]-ara[i]-1;
		}
	}
	if(max==0)
	{
		max=-1;
	}
	cout<<con1+max<<endl;
    
	
	return 0;
}
