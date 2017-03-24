#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
main ()
{
	char* str;
	str=malloc(100*sizeof(char));
	
	gets(str);
	
	printf("\n%d",atoi(str));
	printf("\n%.3f",atof(str));
	
}
