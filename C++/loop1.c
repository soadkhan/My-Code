#include<stdio.h>
int main()
{
	int a=1;
	m:printf("%d\n",a);
	a++;
	if(a<=100) goto m;
	return 0;
}
