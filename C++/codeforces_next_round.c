#include<stdio.h>
int main ()
{
	int arra[1000];
	int i ,n,con=0;
	int po;
	scanf("%d %d ",&n,&po);
	if(po==0)
	{
		printf("0\n");
		return 0 ;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arra[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arra[i]>=arra[po-1]&&arra[i]>0)
		{
			con++;
		}
	}
	
	
	printf("%d\n",con);
	return 0 ;
	
}
