#include<stdio.h>
main ()
{
	int n1,n2,temp;
	int i,j;
	scanf("%d %d",&n1,&n2);
	if(n2<n1)
	{
		temp=n2;
		n1=temp;
		n2=n2;
	}
	j=-1;
	for(i=1;j<=n2;i++)
	{
		j=n2*i;
		if(j%n1==0) break;
	}
	printf("\n%d",j);
}
