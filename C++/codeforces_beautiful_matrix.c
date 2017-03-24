#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,n;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			scanf("%d",&n);
			if(n==1)
			{
				printf("%d\n",abs(i-3)+abs(j-3));
				return 0;
			}
		}
	}
	
	
	return 0;
}
