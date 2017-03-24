#include<stdio.h>
int main(void)
{
	int n,i,temp,pos=0,min,max=0;
	int ara[110];
	int con=0;
	scanf("%d",&n);
	scanf("%d",&ara[0]);
	min=ara[0];
	max=ara[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&ara[i]);
		if(ara[i]<=min)
		{
		    min=ara[i];
		    pos=i;
		} 
		if(ara[i]>max) max=ara[i];
	}
	if(ara[0]==max&&ara[n-1]==min)
	{
		printf("0\n");
		return 0;
	}
	for(i=pos;i<n-1;i++)
	{
		temp=ara[i+1];
		ara[i+1]=ara[i];
		ara[i]=temp;
	}
	con=n-1-pos;
	for(i=0;i<n;i++)
	{
		if(ara[i]==max)
		{
			pos=i;
			break;
		}
	}
	con=con+pos;
	printf("%d\n",con);
	return 0;
}
