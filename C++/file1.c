#include<stdio.h>
#include<string.h>
main ()
{
	FILE *read;
	FILE *write;
	char str[100];
	read=fopen("linkon.txt","r");
	write=fopen("linkonwr.txt","w");
	fscanf(read,"%[^\n]",&str);
	fprintf(write,"%s",str);
}
