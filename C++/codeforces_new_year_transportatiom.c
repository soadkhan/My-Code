#include<stdio.h>
int main(void)
{
	long long int n,k,i,a;
	long long int ara[30000];
	scanf("%I64d %I64d",&n,&k);
	for(i=0;i<n-1;i++)
	{
		scanf("%I64d",&ara[i]);
	}
	for(i=0;i<n-1;)
	{
	     i=i+ara[i];
	     if((i+1)==k)
	     {
	     	printf("YES\n");
	     	return 0;
	     }
	     if((i+1)>k)
	     {
	     	printf("NO\n");
	     	return 0;
	     }
	}
	return 0;
}
