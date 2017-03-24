#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[200];
	int i,con=0,l,j;
	gets(str);
	l=strlen(str);
	for(i=97;i<=122;i++)
	{
		 for(j=0;j<l;j++)
		 {
		 	if(str[j]==i)
		 	{
		         con++;
				 break; 		
		 	}
		 	
		 }
		
	}
	
	if(con%2==1)  printf("IGNORE HIM!\n");
	else printf("CHAT WITH HER!\n");
	
	return 0 ;
}
