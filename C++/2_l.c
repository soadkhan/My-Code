#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	    printf("%3d",a);
		printf("%-3d",a);
		printf("%03d",a);	
	}
	return 0;
}
