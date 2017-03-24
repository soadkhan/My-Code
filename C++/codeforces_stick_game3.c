#include<stdio.h>
int main(void)
{
	int m ,n ,i;
	scanf("%d %d",&n ,&m);
	if(n>=m) i=n;
	else i=m;
	if(i%2==1) printf("Akshat\n");
	else  printf("Malvika\n");
	return 0;
}
