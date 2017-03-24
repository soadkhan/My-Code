#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20];
	int i,j,l;
	gets(str);
	l=strlen(str);
	if(str[0]!='-')
	{
		printf("%s\n",str);
		return 0;
	} 
	else
	{
		if(str[l-1]<str[l-2])
		{
			str[l-2]='a';
		}
		else
		{
			str[l-1]='a';
		}
	}
	if(l==2)
	{
		printf("0\n");
		return 0;
	}
	if(l==3)
	{
		if(str[1]=='0'||str[2]=='0')
		{
			printf("0\n");
			return 0;
		}
	}
	for(i=0;i<l;i++)
	{
		if(str[i]!='a')	printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
