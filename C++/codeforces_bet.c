#include<stdio.h>
int main(void)
{
	int i,a,sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	if(sum==0)
	{
		printf("-1\n");
		return 0;
	}
	if(sum%5==0) printf("%d\n",sum/5);
	else printf("-1\n");
	return 0;
}
