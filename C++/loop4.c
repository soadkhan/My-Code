//1.2+2.3+........n th
#include<stdio.h>
int main()
{
	int i,nth,mem,sum=0;
	i=1;
	scanf("%d",&nth);
	m:mem=i*(i+1);//making i th member
	sum=sum+mem;//adding with sum
	i++;
	if(i<=nth) goto m;
	printf("%d\n",sum);
	return 0;
}
