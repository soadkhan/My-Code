#include<stdio.h>
int main(void)
{
	int i,j,n,con;
	scanf("%d",&n);
	con=(n-1)*(n)/2;
	con=con+n;
	j=1;
	for(i=n-2;i>=1;i--)
	{
		con=con+j*i;
		j++;
	}
	printf("%d\n",con);
	return 0;
}
