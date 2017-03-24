#include<stdio.h>
int main (void)
{
	int i , a,b,c,n;
	int con =0 ;
	scanf("%d",&n);
	if(n==0)
	{
		printf("0\n");
		return 0 ;
	}	
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((a+b+c)>=2)
		{
			con++;
		}
	}
	printf("%d\n",con);
	return 0 ;
}
