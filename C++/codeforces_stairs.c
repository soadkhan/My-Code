#include<stdio.h>
int main(void)
{
	long int n,m,i,move;
	scanf("%ld %ld",&n,&m);
	for(i=n/2;i>=0;i--)
	{
		move=n-i;
		if(move%m==0)
		{
			printf("%ld\n",move);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
	
}
