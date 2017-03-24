#include<stdio.h>
main ()
{
	int i,j,n;
	int fl=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{	
	    fl=0;
		while(n%i==0)
		{
			n=n/i;
			fl=1;
		}
		if(fl==1) printf("\n%d",i);
	}
}
