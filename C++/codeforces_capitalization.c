#include<stdio.h>
#include<string.h>
int main (void)
{
	char str[1050];
	gets(str);
	if(str[0]>='a'&&str[0]<='z')  str[0]=str[0]-32;
	printf("%s\n",str);
	
	
	
	return 0 ;
}
