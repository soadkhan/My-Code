#include<stdio.h>
#include<math.h>
#include<string.h>
main ()
{
	int k,i,j,l,n=0;
	char str[100];
	printf("input your octal number: ");
	gets(str);
	
	l=strlen(str);
	j=0;
	for(i=l-1;i>=0;i--)
	{
		k=str[i]-48;
		n=n+k*pow(8,j);
		j++;
	}
	
	printf("in decimal your numbe is: %d",n);
	
}
