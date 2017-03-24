#include<stdio.h>
#include<string.h>
int main (void)
{
	char str[250],*p;
	int n1=0,n2=0,n3=0,i,l;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='1') n1++;
		if(str[i]=='2') n2++;
		if(str[i]=='3') n3++;
	}
	p=str;
	for(i=0;i<n1;i++)
	{
		*p='1';
		p=p+2;
	}
	for(i=0;i<n2;i++)
	{
		*p='2';
		p=p+2;
	}
	for(i=0;i<n3;i++)
	{
		*p='3';
		p=p+2;
    }
	printf("%s\n",str);
	return 0 ;
}
