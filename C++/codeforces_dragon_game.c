#include<stdio.h>
int main(void)
{
	long int str,dragon,strdr,i,bonus;
	scanf("%ld %ld",&str,&dragon);
	
	for(i=0;i<dragon;i++)
	{
		scanf("%ld %ld",&strdr,&bonus);
		if(str>strdr)
		{
		    str=str+bonus;	
		}
		else
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
