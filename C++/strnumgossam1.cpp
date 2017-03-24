#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,l;
	char num[100];
	gets(num);
	l=strlen(num);
	for(i=1;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			printf("%c",num[j]);
		}
		printf("\n");
	}
	
	
}
