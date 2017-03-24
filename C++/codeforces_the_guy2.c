#include<stdio.h>
int main(void)
{
	int ara[110];
	int n,p,i,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ara[i]=1;
	}
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&a);
		ara[a-1]=0;
	}
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&a);
		ara[a-1]=0;
	}
	for(i=0;i<n;i++)
	{
		if(ara[i]==1)
		{
			printf("Oh, my keyboard!\n");
			return 0;
		}
	}
	
	printf("I become the guy.\n");
	return 0;
}
