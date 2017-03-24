#include<stdio.h>
int main(void)
{
	long int n;
	long int i,con=1;
	scanf("%ld",&n);
	for(i=1;;i++)
	{
        n=n-(i*(i+1)/2);
		if(n<(i+2)*(i+1)/2)
		{
			printf("%ld\n",con);
			return 0;
		}
		else
		{
			con++;
		}		
	}
	return 0;
}
