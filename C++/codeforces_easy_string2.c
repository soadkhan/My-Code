#include<stdio.h>
#include<string.h>
int main (void)
{
	char str[110] ;
	char *p;
	gets(str);
	p=str;
	strlwr(str);
	while(4)
	{
		if(*p=='\0')
		{
		 printf("\n");
		 break;
	    } 
		if(*p!='a'&&*p!='e'&&*p!='i'&&*p!='o'&&*p!='u'&&*p!='y')
		{
			printf(".%c",*p);
		}
		p=p+1;
	}
	return 0 ;
}
