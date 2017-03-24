#include<stdio.h>
#include<math.h>
#include<string.h>
char num[100];
char num2[100];
char num3[100];
int dec; 
void dec_to_bin(int n)
{
	
	int i;
	int j;
	for(i=0;n!=0;i++)
	{
		j=n%2;
		num[i]=j+48;
		n=n/2;
	}
	num[i]='\0';
	int l;
	l=strlen(num);
	printf("\n");
	int k=0;
	for(i=l-1;i>=0;i--)
	{
		num2[k]=num[i];
		k++;
	}
	num[k]='\0';
}
void bin_to_dec(void)
{
	int n;
	int i;
	int j,l;
	dec=0;
	l=strlen(num2);
	j=l-1;
	for(i=0;i<l;i++)
	{
		dec=dec+(num2[i]-48)*pow(2,j);
		j--;
	}
}
main ()
{
	int n,i,j, go,z=0;
	scanf("%d",&n);
	if(n==1)
	{
		printf("0\n1");
		z=1;
	}
   if(z==0)
   {
	
	    i=0;
    	j=1;
	    num2[i]='1';
	    num3[i]='1';
	    for(j=1;j<n;j++)
     	{
	     	num2[j]='0';
    	}
	    num2[j]='\0';
        for(j=1;j<n;j++)
    	{
	    	num3[j]='1';
    	}
    	num3[j]='\0';
    	puts(num2);
        int s=2;
        while(s!=0)
        {
	     bin_to_dec();
     	 dec=dec+1;
         dec_to_bin(dec);
    	 puts(num2);
    	 s=strcmp(num3,num2);
        }
   }
}
