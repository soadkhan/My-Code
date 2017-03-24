#include<stdio.h>
int main(void)
{
	int n,m,i,j,min,temp;
	int ara[110];
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(i=m-2;i>=0;i--)
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
    min=ara[0]-ara[n-1];
    for(i=0;i<=m-n;i++)
    {
    	if((ara[i]-ara[i+n-1])<min)
    	{
    		min=ara[i]-ara[i+n-1];
    	}
    }
    printf("%d\n",min);
	return 0;
}
