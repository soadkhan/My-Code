#include<stdio.h>
int main(void)
{
	long int i,j,n,a,b,c,d;
	long int maxrep=1,rep=1;
	scanf("%ld %ld %ld",&n,&a,&b);
	for(i=1;i<n;i++)
	{
		scanf("%ld %ld",&c,&d);
		if(a==c&&b==d)
		{
			rep++;
			if(rep>maxrep)
			{
				maxrep=rep;
			}
		}
		else
		{
			rep=1;
		}
		a=c;
		b=d;
		
	}
	printf("%ld\n",maxrep);
	return 0;
}
