#include<stdio.h>
int main()
{
	int i,a,b,t,n;
	a=1;
	b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",a);
		t=a+b;
		a=b;
		b=t;
	}
	return 0;
}
