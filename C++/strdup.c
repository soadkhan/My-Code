#include<stdio.h>
#include<string.h>
#include<malloc.h>
main ()
{
	char *str;
	char *str2;
	char *str3;
	char *lo;
	int pos;
	str3=malloc(100);
	str=malloc(100);
	str2=malloc(100);
	
	gets(str);
	gets(str3);
	str2=strdup(str);
	
    strcpy(str+strlen(str),str2);
    lo=strstr(str,str3);
    
    if(lo!=NULL)
    printf("\n%d",lo-str);
    
    	

}
