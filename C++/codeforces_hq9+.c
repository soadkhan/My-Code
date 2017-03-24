#include<stdio.h>
#include<string.h>
int main (void)
{
	char str[200];
	int i,l,fl=0;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='H'||str[i]=='Q'||str[i]=='9'||str[i]=='+')
		{
			fl=1;
			printf("YES\n");
		}
	}
	if(fl==0) printf("NO\n");
	
	return 0 ;
}
