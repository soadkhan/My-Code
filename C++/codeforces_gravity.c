#include<stdio.h>
int main(void)
{
	int n,temp,i,j;
	int ara[110];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(ara[j]>ara[j+1])
			{
				temp=ara[j+1];
				ara[j+1]=ara[j];
				ara[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ara[i]);
	}
	printf("\n");
	return 0;
}
