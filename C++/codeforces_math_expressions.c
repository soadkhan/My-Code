#include<stdio.h>
int main(void)
{
	int a,b,c;
	int max=0;
	int ex;
	scanf("%d %d %d",&a,&b,&c);
	
	ex=a+b+c;
	if(ex>max) max=ex;
	ex=a*b*c;
	if(ex>max) max=ex;
	ex=(a*b)+c;
	if(ex>max) max=ex;
	ex=a*(b+c);
	if(ex>max) max=ex;
	ex=(a+b)*c;
	if(ex>max) max=ex;
	ex=a+(b*c);
	if(ex>max) max=ex;
	
	
	printf("%d\n",max);
	
	return 0;
}
