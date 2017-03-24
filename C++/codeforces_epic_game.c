#include<stdio.h>

int gcd(int a,int b)
{
	int i;
	for(i=a;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			return i ;
		}
	}
}

int main(void)
{
	int a,b,n;
	scanf("%d %d %d",&a ,&b ,&n);
	while(4)
	{
		if(n==0) 
		{
			printf("1\n");
			return 0;
		}
		n=n-gcd(a,n);
		if(n==0)
		{
			printf("0\n");
			return 0;
		}
		n=n-gcd(b,n);
			
	}
	return 0;
}
