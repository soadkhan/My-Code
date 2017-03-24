#include<stdio.h>
int main()
{
	int a=1,b;
	scanf("%d",&b);
	m:printf("%d\n",a);
	a++;
	if(a<=b) goto m;
	return 0;
}
