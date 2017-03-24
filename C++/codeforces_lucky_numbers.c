#include<stdio.h>
int main(void)
{
	int ara[14]={4,7,44,77,47,74,444,447,474,744,477,747,774,777};
	int i,n;
	scanf("%d",&n);
	for(i=0;i<14;i++)
	{
		if(n%ara[i]==0)
		{
			 printf("YES\n");
			 return 0;
		}
	}
	
	
	printf("NO\n");
	
	return 0;
}
