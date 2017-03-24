#include<stdio.h>

int main(void)
{
     int n,m,a,b;
     int cost,k;
     scanf("%d %d %d %d",&n,&m,&a,&b);
     
     
     if((b/m)<a&&b<n*a)
     {
     	cost=(n/m)*b;
     	n=n%m;
     	if(n*a<b) cost=cost+n*a;
     	else cost=cost+b;
     	printf("%d\n",cost);
     	return 0;
     }
     
     
     else
     {
     	cost=n*a;
     	printf("%d\n",cost);
     	return 0;
     }
	return 0;
}
