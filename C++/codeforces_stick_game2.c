#include<stdio.h>
int main(void)
{
	int m ,n ,con=1;
	int i=1,j=1;
	scanf("%d %d",&n,&m);
	while(4)
	{
		i++;
		if(i<=n&&i<=m)
		{
			con++;
		}
		else
		{
		    if(con%2==1) printf("Akshat\n");
		    else  printf("Malvika\n");
			return 0;
		}
	}
	
	
	
	
	
	return 0;
}
