#include<stdio.h>

int main(void)
{
	int n,i,j,con=0,sum=0,temp,sumr=0;
	int ara[150];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
		sum=sum+ara[i];
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			 if(ara[j]<ara[j+1])
			 {
			     temp=ara[j+1];
				 ara[j+1]=ara[j];
				 ara[j]=temp; 
			 }
		}
	}
	
	for(i=0;i<n;i++)
	{
	    sumr=sumr+ara[i];
		if(sumr>(sum-sumr))
		{
			printf("%d\n",i+1);
			return 0 ;
		}	
		
	}
	
	return 0 ;
}
