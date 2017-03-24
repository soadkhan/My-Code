#include<stdio.h>
#include<string.h>
int main(void)
{
	int l,i,j,fl=0;
	char str[110];
	scanf("%d",&l);
	if(l<26)
	{
		printf("NO\n");
		return 0;
	}
	getchar();
	gets(str);
	strlwr(str);
	for(i=97;i<=122;i++)
	{
		fl=0;
		for(j=0;j<l;j++)
		{
			if(str[j]==i)
			{
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			printf("NO\n");
			return 0;
		}
	}
	
	printf("YES\n");
	return 0;
}
