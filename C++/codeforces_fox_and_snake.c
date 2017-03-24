#include<stdio.h>
int main(void)
{
	int r,n,i,j;
	scanf("%d %d",&r,&n);
	for(i=1;i<=r;i++)
	{
		if(i%2==1)
		{
			for(j=0;j<n;j++)
			{
				printf("#");
			}
			printf("\n");
			continue;
		}
		if(i%4==0)
		{
			printf("#");
			for(j=0;j<n-1;j++)
			{
				printf(".");
			}
			printf("\n");
			continue;
		}
		if(i%2==0)
		{
			for(j=0;j<n-1;j++)
			{
				printf(".");
			}
			printf("#");
			printf("\n");
			continue;
		}
	}
	return 0;
}
