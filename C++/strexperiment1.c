#include<stdio.h>
#include<string.h>
main  ()
{
	char dig[100];
	char pri[100];
	gets(dig);
	int i,j,l,k;
	l=strlen(dig);
	printf("\n\n\n\n");
    for(k=0;k<l;k++)
    { 	
	    for(i=0;i<l;i++)
	    { 
		   for(j=0;j<l;j++)
		   {
			printf("%c%c%c",dig[k],dig[i],dig[j]);
			printf("\n");
		   }
	
	    }
	    
    }
}
