#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
			cout<<"  ";
		}
		for(int j=0;j<=i;j++)
		{
			if(j==0&&i==0)
			{
				cout<<0;
				break;
			}
			printf("%-2d",j);
		}
		for(int j=i-1;j>=0;j--)
		{
			if(j==0)
			{
				cout<<0;
				break;
			}
			printf("%-2d",j);
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
	     for(int j=0;j<i;j++)
		 {
		 	cout<<"  ";
		 }	
		 for(int j=0;j<=n-i;j++)
		 {
		 	if(i==n&&j==0)
		 	{
		 		cout<<0;
		 		break;
		 	}
		 	printf("%-2d",j);
		 }
		 for(int j=n-i-1;j>=0;j--)
		 {
		 	if(j==0) 
		 	{
		 		cout<<0;
		 		continue;
		 	}
		 	printf("%-2d",j);
		 }
		 cout<<endl;
	}
	return 0;
}
