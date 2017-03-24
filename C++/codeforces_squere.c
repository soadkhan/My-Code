#include<stdio.h>
main ()
{
	long int a,b;
	long int x,pro,i;
	scanf("%ld %ld %ld",&a,&b,&x);
	int test =0;
	for(i=1;test==0;i++)
	{
		if(x*i>=a)
		{
			pro = i;
			test=1;
		}
		
	}
	
	for(i=1;test==1;i++)
	{
		if(x*i>=b)
		{
			pro=pro*i;
			test=0;
		}
		
	}
	printf("%ld\n",pro);
	
}
