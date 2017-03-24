#include<stdio.h>
int main(void)
{
	int ara[7];
	int i, j,temp;
	for(i=0;i<6;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(i=4;i>=0;i--)
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
	
    if(ara[0]==ara[5])
    {
    	printf("Elephant\n");
    	return 0;
    }
    if(ara[0]==ara[3])
    {
    	if(ara[4]==ara[5])
    	{
    		printf("Elephant\n");
    		return 0;
    	}
    	else
    	{
    		printf("Bear\n");
    		return 0;
    	}
    }
    if(ara[1]==ara[4])
    {
    	printf("Bear\n");
    	return 0;
    }
    if(ara[2]==ara[5])
    {
    	if(ara[0]==ara[1])
    	{
    		printf("Elephant\n");
    		return 0;
    	}
    	else
    	{
    		printf("Bear\n");
    		return 0;
    	}
    }
    printf("Alien\n");
    return 0;
}
