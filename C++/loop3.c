#include<stdio.h>
int main()
{
	int n=1,a;
	int sum=0;
	scanf("%d",&a);
	m:sum=sum+n;
	n++;
	if(n<=a) goto m;
	printf("%d\n",sum);
	return 0;
}
