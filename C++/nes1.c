#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	   for(i=1;i<=n-j;i++)
	   	   printf("  ");
	   	   
	   for(i=1;i<=j;i++)
	   	   printf("%-2d",i);
	   
	   printf("\n");
    }
	return 0;
}
