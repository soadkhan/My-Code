#include<stdio.h>
int main(void)
{
	int ara[110],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
		     if(i==ara[j])
		     {
		     	printf("%d ",j+1);
		     	break;
		     }
			 	
		}
		
	}
	printf("\n");
	return 0;
}
