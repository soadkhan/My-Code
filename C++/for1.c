#include<stdio.h>
int main()
{
	int a,s=0,ath,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		s+=2*a;
	}
	printf("%d",s);
	return 0;
}
