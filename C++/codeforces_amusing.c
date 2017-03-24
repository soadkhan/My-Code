#include<stdio.h>
int main(void)
{
	long int max,min,a,n,i;
	long int con=0;
	scanf("%ld",&n);
	
	scanf("%ld",&a);
	max=a;
	min=a;
	for(i=0;i<n-1;i++)
	{
		scanf("%ld",&a);
		if(a>max)
		{
			max=a;
			con++;
		}
		if(a<min)
		{
			min=a;
			con++;
		}
	}
	printf("%ld\n",con);
	return 0;
}
