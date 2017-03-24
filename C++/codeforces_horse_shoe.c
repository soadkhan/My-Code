#include<stdio.h>
int main(void)
{
	long long int ara[5];
	int con=0,shoe=0;
	int i,j;
	for(i=0;i<4;i++)
	{
		scanf("%I64d",&ara[i]);
	}
	for(i=0;i<4;i++)
	{
		con=0;
		for(j=i;j<4;j++)
		{
			if(ara[i]==ara[j])
			{
				con++;
			}
		}
		if(con==1)
		{
			shoe++;
		}
	}
	printf("%d\n",4-shoe);
	return 0;
}
