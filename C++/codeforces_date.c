#include<stdio.h>
int main(void)
{
	long long int a,b,n;
	scanf("%I64d %I64d %I64d",&a,&b,&n);
	if(a<0) a=a*-1;
	if(b<0) b=b*-1;
	if((a+b)%2==0)
	{
		if(n>=(a+b)&&n%2==0)
		{
			printf("YES\n");
			return 0;
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}
	if((a+b)%2==1)
	{
		if(n>=(a+b)&&n%2==1)
		{
			printf("YES\n");
			return 0;
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}
	return 0;
}
