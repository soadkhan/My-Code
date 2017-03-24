#include<stdio.h>
void func(int *p,int *q);
main()
{
	int a,b;
	a=5,b=10;
	printf("Before calling the value of a and b is: %d %d\n",a,b);
	func(&a,&b);
	printf("After calling the value of a and b is: %d %d\n",a,b);
}
void func(int *p,int *q)
{
	int tmp;
	tmp=*p;
	*p=*q;
	*q=tmp;
}
