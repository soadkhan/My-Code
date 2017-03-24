#include<stdio.h>
int main(void)
{
	long int str,strdra,bonus,n,i,j,temp1,temp2;
	long int ara[1100][4];
	scanf("%ld %ld",&str,&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld",&ara[i][0],&ara[i][1]);
	}
	
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(ara[j][0]>ara[j+1][0])
			{
				temp1=ara[j+1][0];
				ara[j+1][0]=ara[j][0];
				ara[j][0]=temp1;
				temp2=ara[j+1][1];
				ara[j+1][1]=ara[j][1];
				ara[j][1]=temp2;
			}
		}
	}
    
    for(i=0;i<n;i++)
    {
    	if(str>ara[i][0])
    	{
    		str=str+ara[i][1];
    	}
    	else
    	{
    		printf("NO\n");
    		return 0;
    	}
    }
    
    printf("YES\n");
	return 0;
}
