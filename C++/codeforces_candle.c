#include<stdio.h>
int main(void)
{
	int n,m,sum=0;
	int l,d;
	scanf("%d %d",&n,&m);
	l=n;
	d=n;
	sum=n;
	while(4)
	{
	    l=d/m;
	    sum=sum+l;
		d=l+d%m;	
		if(d<m)
		{
			printf("%d\n",sum);
			return 0;
		}
	}
	return 0;
}
