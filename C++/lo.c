//2+4+6+.....+nth
#include<stdio.h>
int main()
{
	int a,s=0,ath,n;
	scanf("%d",&n);
	a=1;
	m:ath=2*a;
	s+=ath;
	a++;
	if(a<=n) goto m;
	printf("%d",s);
	return 0;
}
