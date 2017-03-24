#include<stdio.h>
int main(void)
{
	long long int i ;
	scanf("%lld",&i);
	if(i%2==0) printf("%lld\n",i/2);
	else printf("%lld\n",(i/2)-i);
	return 0;
}
