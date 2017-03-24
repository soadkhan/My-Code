#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,sum=0,i,j,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a*=i;
		}
		sum+=a;
	}
	printf("%d",sum);
	return 0;
}
