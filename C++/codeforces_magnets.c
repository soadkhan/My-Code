#include<stdio.h>
int main(void)
{
	long int n,i,con=1;
	int a,b;
	scanf("%ld",&n);
	scanf("%d",&a);
	for(i=1;i<n;i++)
	{
		scanf("%d",&b);
		if(a!=b) con++;
		a=b;
	}
	printf("%ld\n",con);
	return 0;
}
