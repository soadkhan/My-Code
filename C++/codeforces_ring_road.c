#include<stdio.h>
int main(void)
{
	long long int i,a,b,move=0 ,n,m;
	scanf("%I64d %I64d",&n,&m);
	a=1;
	for(i=0;i<m;i++)
	{
		scanf("%I64d",&b);
		if(a<b) move=move+b-a;
		if(a>b) move=move+n-a+b;
		a=b;
	}
	printf("%I64d\n",move);
	return 0;
}
