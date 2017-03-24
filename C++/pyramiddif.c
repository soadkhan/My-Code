#include<stdio.h>
main ()
{
	int n,i,j;
	printf("how many rows you have..........\n");
	scanf("%d",&n);
	printf("here it is.........\n\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		for(j=0;j<i;j++)
		{
			printf("%3d",j+i);
		}
		for(j=i-2;j>=0;j--)
		{
 			if(j+i!=0)
			{
				printf("%3d",j+i);
			}
		}
		printf("\n");
	}
}
