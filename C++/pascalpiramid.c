#include<stdio.h>
main ()
{
	int i,j,c,n;
	
	printf("how many rows you have?: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		c=1;
		for(j=1;j<=i;j++)
		{
			printf("%4d",c);
			c=c*(i-j)/j;
		}
		printf("\n");
		
	}
}
