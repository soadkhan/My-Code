#include<stdio.h>
main ()
{
	FILE *write_object;
	write_object=fopen("document2.txt","w");
	char str[100];
	gets(str);
	fputs(str,write_object);
	
	
}

