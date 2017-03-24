#include<stdio.h>
int main(void)
{
	int a,b,n,i,con=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a ,&b);
		if((b-a)>=2) con++;
	}
	printf("%d\n",con);
	
	
	
	return 0;
}
