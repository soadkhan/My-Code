#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,l;
	char str[1000];
	gets(str);
	l=strlen(str);
	int fla=0;
	for(i=0;i<l;i++)
	{
		if(str[i]==' '||i==l-1)
		{
			if(i!=l-1) j=i-1;
			if(i==l-1) j=i;
			for(;str[j]!=' '&&j>=0;j--)
			{
			    printf("%c",str[j]);		
			}
		    printf(" ");	
		}
		m:;
	}
}
