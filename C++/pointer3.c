#include<stdio.h>
#include<string.h>
main ()
{
	char str[100];
	char *ptr;
	gets(str);
	ptr=str;
	while(*ptr!='\0')
	{
		ptr++;
	}
	printf("%d",(ptr-str));
    
}
