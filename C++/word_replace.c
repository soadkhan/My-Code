
#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main ()
{
	char *check,*mai,*sub,*new;
	int lo,ls,k;
	mai=malloc(100);
	sub=malloc(100);
	new=malloc(100);
	gets(mai);
	gets(sub);
	gets(new);
	ls=strlen(sub);
	    check=strstr(mai,sub);
	    if(check==NULL)
	    {
	    	 printf("sorry i can't......");
	    	 return 0;
	    }
	    while(check!=NULL)
	    {
		     lo=check-mai;
		     k=lo+ls;
		     check=strdup(mai+k);	
	    	 strcpy(mai+lo,new);
		     strcat(mai,check);
		     check=strstr(mai,sub);
	    }
	printf("%s",mai);
	return 0;
}
