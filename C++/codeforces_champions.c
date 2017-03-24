#include<stdio.h>
int main(void)
{
	int tak,req=0,med,cup,a1,a2,a3,b1,b2,b3;
	scanf("%d %d %d",&a1,&a2,&a3);
	cup=a1+a2+a3;
	scanf("%d %d %d",&b1,&b2,&b3);
	med=b1+b2+b3;
	scanf("%d",&tak);
	
	if(cup%5==0) req=req+(cup/5);
	else req=req+(cup/5)+1;
	
	if(med%10==0) req=req+(med/10);
	else req=req+(med/10)+1;
	
	if(req>tak) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}
