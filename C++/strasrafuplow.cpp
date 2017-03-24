#include<stdio.h>
#include<string.h>
main ()
{
	char str[100];
	gets(str);
	strupr(str);
	puts(str);
	strlwr(str);
	puts(str);
	strrev(str);
	puts(str);
}

