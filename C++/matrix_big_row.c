#include<stdio.h>
main ()
{
	int i,j,max;
	int ara1[100][100];
	int ara2[100][100];
	int n;
	printf("n?: ");
	scanf("%d",&n);
	printf("\ninput the first matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ara1[i][j]);
		}
	}
	
	printf("\ninput the second matrix: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ara2[i][j]);
		}
	}
	
	printf("\nthe result is: \n");
	
	for(i=0;i<n;i++)
	{
		max=ara1[i][0];
		for(j=0;j<n;j++)
		{
			if(max<ara1[i][j])
			{
				max=ara1[i][j];
			}
	
		}
		for(j=0;j<n;j++)
		{
			if(max<ara2[i][j])
			{
				max=ara2[i][j];
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%d ",max);
		}
		printf("\n");
		
	
	}
	
}
