#include<stdio.h>
#include<string.h>

int main (void)
{
	char str[1000];
	int ara[1000];
	int i,j,fl,con=0 ;
	scanf("%s",&str);
	for(i=0;i<strlen(str)-2;i++)
	{
		if(str[i]=='w'&&str[i+1]=='u'&&str[i+2]=='b')
		{
			ara[con]=i;
			con++;
		}
	}
	fl=1;
    for(i=0;i<ara[0];i++)
    {
    	printf("%c",str[i]);
    	fl=0;
    }
    if(fl==0) printf(" ");
    fl=1;
    		
	for(i=0;i<con-1;i++)
	{
		for(j=ara[i]+3;j<ara[i+1];j++)
		{
		     printf("%c",str[j]);
			 fl=0;	
		}
		if(fl==0) printf(" ");
		fl=1;
	}
	for(i=ara[con-1]+3;i<strlen(str);i++)
	{
		printf("%c",str[i]);
	}
	return 0 ;
}
