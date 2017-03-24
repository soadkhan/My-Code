#include<stdio.h>
int main (void)
{
	char str[100],*pos,*p;
	int con = 0 ,n;
	scanf("%d",&n);
	getchar();
    scanf("%s",&str);
	
	p=str;
	while(*p!='\0')
	{
	   if(*p=='R'&&*(p+1)=='R')
	   {
	   	   con++;
	   }
	   p=p+1;
	}
	
	p=str;
	while(*p!='\0')
	{
	   if(*p=='G'&&*(p+1)=='G')
	   {
	   	   con++;
	   }
	   p=p+1;
	}
	
	p=str;
	while(*p!='\0')
	{
	   if(*p=='B'&&*(p+1)=='B')
	   {
	   	   con++;
	   }
	   p=p+1;
	}
	printf("%d\n",con);
	
	return 0 ;
}
