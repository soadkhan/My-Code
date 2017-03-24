#include<stdio.h>
int c;
void min(int b,int a)
{
	c=b-a;
}
main ()
{
	int a,b;
	scanf("%d %d",&a,&b);
	min(a,b);
	printf("%d",c);
}
