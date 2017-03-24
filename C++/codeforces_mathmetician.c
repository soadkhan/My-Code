#include<stdio.h>
#include<string.h>
int main(void)
{
	int i ,l;
	char str1[110];
	char str2[110];
	gets(str1);
	gets(str2);
	l=strlen(str1);
	for(i=0;i<l;i++)
	{
		if(str1[i]==str2[i]) printf("0");
		else printf("1");
	}
	printf("\n");
	return 0;
}
