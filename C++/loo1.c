#include<stdio.h>
int main()
{
	int i,a,b,s=1;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	    s*=a;
	
	printf("%d",s);
	
	return 0;
}
