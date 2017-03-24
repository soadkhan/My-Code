#include<stdio.h>
int main(void)
{
	long long int n,k;
	scanf("%I64d %I64d",&n,&k);
	
	if(n%2==0)
	{
		if(k<=(n/2))
		{
			printf("%I64d\n",2*k-1);
			return 0;
		}
		if(k>(n/2))
		{
			k=k-n/2;
			printf("%I64d\n",2*k);
			return 0;
		}
	}
	if(n%2==1)
	{
		if(k<=((n+1)/2))
		{
			printf("%I64d\n",2*k-1);
			return 0;
		}
		else
		{
			k=k-((n+1)/2);
			printf("%I64d\n",2*k);
			return 0;
		}
	}
	return 0;
}
