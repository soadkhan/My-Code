#include<stdio.h>
#include<math.h>
int main(void)
{
	long int a,i,con=0,crime=0,police=0,n;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a);
		if(a<0&&police==0)
		{
			crime=crime+(-a);
		}
		if(a<0&&police>0)
		{
			police=police+a;
		}
		if(a>0)
		{
			police=police+a;
		}
	}
	printf("%ld\n",crime);
	return 0;
}
