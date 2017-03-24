#include<stdio.h>


void pri(int ara2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",ara2[i]);
	}
}
void sca(int ara2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara2[i]);
	}
}

main()
{
	int n,i;
	int ara[100];
	scanf("%d",&n);
	/********
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	******/
	
	sca(ara,n);
	
	pri(ara,n);
	
	/*****
	printf("\n\n\n\n");
	for(i=0;i<n;i++)
    {
    
		printf("\n%d",ara[i]);
		
	}
	*****/
	
}
