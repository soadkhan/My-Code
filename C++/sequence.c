#include<stdio.h>
#include<string.h>
main ()
{
	int i,in,j;
	int con=0;
	int l;
	int max=0;
	int po;
	char str[100];
	int ara[100][2];
	int r,c;
	r=0;
	c=0;
	gets(str);
	l=strlen(str);
	
	
	
	for(i=0;i<l-1;i++)
	{
	    con=0;
	    if(str[i]<str[i+1])
	    {
	    	con++;
	    
	    	ara[r][1]=i;
	    	r++;
	    	j=1;
	    	while(str[i+j]<str[i+j+1])
	    	{
	    		con++;
	    		j++;
	    	}
	    	i=i+j;
	    }
	   
	    ara[r-1][0]=con;
	
	}
	
	
	int temp;
 	for(i=r-2;i>=0;i--)
 	   {
 	   	   for(j=0;j<=i;j++)
 	   	   {
 	   	   	   if(ara[j][0]<ara[j+1][0])
 	   	   	   {
 	   	   	   	   temp=ara[j+1][0];
 	   	   	   	   ara[j+1][0]=ara[j][0];
 	   	   	   	   ara[j][0]=temp;
 	   	   	   	   temp=ara[j+1][1];
 	   	   	   	   ara[j+1][1]=ara[j][1];
 	   	   	   	   ara[j][1]=temp;
 	   	   	   }
 	   	   }
 	   }
	
	

  
    for(i=0;i<r;i++)
    {
    	if(ara[i][0]!=0)
    	{
    	printf("\nsequence of %d charecters begins from %d-th position.",ara[i][0]+1,ara[i][1]+1);	
    	}
    }
  
  
}
