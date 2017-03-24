#include<stdio.h>
#include<string.h>
main ()
{
	int i,j=0;
	char str[100];
	int ara[100];
	int l;
	int max,lo;
	max=0;
	gets(str);
	l=strlen(str);
	ara[j]=-1;
	j++;
	
	
	  for(i=0;i<l;i++)
	  {
	  	  if(str[i]==' ')
	  	  {
	  	  	ara[j]=i;
	  	  	j++;
	  	  }
	  }
	  ara[j]=l;
	  j++;
	  
	  for(i=0;i<j-1;i++)
	  {
	  	   if(ara[i+1]-ara[i]-1>max)
	  	   {
	  	   	max=ara[i+1]-ara[i]-1;
	  	   	lo=ara[i]+1;
	  	   }
	  	
	  }  
	  
	  
	  printf("\n");
	  for(i=lo;i<lo+max;i++)
	  {
	  	printf("%c",str[i]);
	  }
	  
	
}
