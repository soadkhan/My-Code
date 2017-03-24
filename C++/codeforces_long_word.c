#include<stdio.h>
#include<string.h>
int main (void)
{
	int i,n ;
	char str[110][110];	
	scanf("%d",&n);	
	getchar();
	for(i=0;i<n;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(str[i])<=10) printf("%s\n",str[i]);
		else printf("%c%d%c\n",str[i][0],strlen(str[i])-2,str[i][strlen(str[i])-1]);
	}	
	return 0;
}
