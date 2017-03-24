#include<stdio.h>
void judg(int x,int y,int *p,int *q)
{
	if(x>y)
	{
		*p=x;
		*q=y;
	}
	if(y>x)
	{
	    *p=y;
		*q=x;	
	}
}
main ()
{
	int x,y;
	int *p,*q;
	p=&x;
	q=&y;
	scanf("%d %d",&x,&y);
	judg(x,y,p,q);
	printf("%d %d",*p,*q);
}                                                                                                                                                                                                                                                                                                                                                  
