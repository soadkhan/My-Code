#include<stdio.h>
#include<string.h>
main ()
{
	 int l,i,n;
	 char str[100];
	 printf("input your number in octal : ");
	 
	 gets(str);
	 l=strlen(str);
	 n=0;
	 for(i=0;i<l;i++)
	 {
	 	n=n*8+str[i]-48;
	 	
	 }
	 
	 printf("\nyour number in decimal is: %d",n);
}
