#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,fl=0,k;
	char str[1000];
	char chosen[100];
	char newo[100];
	int ls,lc,ln;
	
	printf("input your sentence: ");
	gets(str);
	printf("\ninput your chosen word: ");
	gets(chosen);
	printf("\ninput the new word: ");
	gets(newo);
	printf("\nyour new sentence is: ");
	
	ls=strlen(str);
	lc=strlen(chosen);
	ln=strlen(newo);
	
	for(i=0;i<=ls-lc;i++)
	{
		 fl=0;
		 k=-1;
		 for(j=i;j<i+lc;j++)
		 {
		 	k++;
		 	if(str[j]!=chosen[k])
		 	{
		 		fl=1;
		 		break;
		 	}
		 }
		 if(fl==0)
		 {
		 	for(k=0;k<i;k++)
		 	{
		 		printf("%c",str[k]);
		 	}
		 	break;
		 }
	
	}
	
	for(k=0;k<ln;k++)
	{
		printf("%c",newo[k]);
	}
	
	for(k=i+lc;k<ls;k++)
	{
		printf("%c",str[k]);
	}
	
	
	
}
