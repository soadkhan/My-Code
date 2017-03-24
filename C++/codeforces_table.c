#include<stdio.h>
long int value(long int row,long int col)
{
	if(row==1||col==1)
	{
		return 1;
	}
	else
	{
		return(value(row,col-1)+value(row-1,col));
	}
}
int main(void)
{
	long int n;
	scanf("%ld",&n);
	printf("%ld\n",value(n,n));
	return 0;
}
