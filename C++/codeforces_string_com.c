#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[200];
	char str2[100];
	gets(str1);
	gets(str2);
	strlwr(str1);
	strlwr(str2);
	printf("%d\n",strcmp(str1,str2));
	return 0 ;
}
