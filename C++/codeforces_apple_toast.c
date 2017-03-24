#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long long int i,n,j ,temp,sum=0;
	long long int *ara;
	ara=malloc(30000*sizeof(long long int));
	scanf("%I64d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%I64d",&*(ara+i));
	}
    
    for(i=n-2;i>=0;i--)
    {
    	for(j=0;j<=i;j++)
    	{
    		if(*(ara+j)>*(ara+j+1))
    		{
    			temp=*(ara+j+1);
    			*(ara+j+1)=*(ara+j);
    			*(ara+j)=temp;
    		}
    	}
    }
    
    for(i=0;i<n-1;i++)
    {
    	sum=sum+*(ara+i) * (i+2) ;
    }
    sum=sum+ *(ara+n-1) * n;
    
    printf("%I64d\n",sum);
	return 0;
}
