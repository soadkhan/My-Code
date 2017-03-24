#include<stdio.h>
int check(long int n)
{
	long int i,j;
	if(n<=3)
	{
		return 0;
	}
	if(n%2==0)
	{
		return 1;
	}
	if(n%2==1)
	{
		for(i=3;i<n;i=i+2)
		{
			if(n%i==0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main(void)
{
	long int n,i ,j;
	scanf("%ld",&n);
	for(i=4;i<n;i++)
	{
		if(check(i)==1&&check(n-i)==1)
		{
			printf("%ld %ld\n",i,n-i);
			return 0;
		}
	}
	
	
	
	return 0;
}
