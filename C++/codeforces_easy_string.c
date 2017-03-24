#include<stdio.h>
#include<string.h>
int main (void)
{
	int i,n=0;
	char str[110];
	char out[110];	
	gets(str);	
	strlwr(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
		{
			out[n]=str[i];
			n++;
		}  
		
	}		
	out[n]='\0';	
   for(i=0;i<n;i++)
   {
   	  printf(".");
   	  printf("%c",out[i]);
   }   	
   	printf("\n");	
	return 0;
}
