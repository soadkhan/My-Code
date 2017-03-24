#include<stdio.h>
void pyramid(int n)
{
	
	int i,j;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	
}
main ()
{
	int input[1000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&input[i]);
	}
	for(i=0;i<n;i++)
	{
			pyramid(input[i]);
	}
}
