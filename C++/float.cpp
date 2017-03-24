#include<stdio.h>
int main()
{
	float a,b;
	int c;
	scanf("%f",&a);
	c=(int)a;
	b=(float)c;
	if(a-b>0)
	{
		printf("float\n");
	}
	else
	{
		printf("int\n");
	}
	return 0;
}
