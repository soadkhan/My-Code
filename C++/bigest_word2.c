#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,l;
	int con=0;
    int ara[100][2];
    char str[100];
    
    gets(str);
    l=strlen(str);
    j=0;
    int fl=0;
    ara[0][0]=-1;
    for(i=0;i<l;i++)
    {
    	if(str[i]!=' ')
    	{
    		con++;
    		fl=1;
    	}
    	if(str[i]==' '||i==l-1)
    	{
    	     ara[j][1]=con;
    	     j++;
			 ara[j][0]=i;
			 con=0;	
    	}
    }
   // for(i=0;i<j;i++)
   // {
   // 	printf("\n %d    %d",ara[i][0],ara[i][1]);
    //}
    
    int max=ara[0][1];
    
     for(i=0;i<j;i++)
     {
     	if(max<ara[i][1])
     	{
     		max=ara[i][1];
     	}
     	
     }
     //printf("\n%d\n",max);
     printf("\n");
     int k;
     
     for(i=0;i<j;i++)
     {
     	 if(ara[i][1]==max)
     	 {
     	      for(k=1;k<=ara[i][1];k++)
			   {
			   	  printf("%c",str[ara[i][0]+k]);
			   }	
     	 	   printf("\n");
     	 	 	
     	 }
     		
     }
     
}
