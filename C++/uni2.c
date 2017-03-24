#include<stdio.h>
main ()
{
	int n1,n2,ni;
	int i,j;
	int con=0;
	int ara1[100];
	int ara2[100];
	int inter[100];
	
	
	printf("how many number you have in the first set:");
	scanf("%d",&n1);
	
	
	printf("\ninput your numbers:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ara1[i]);
	}
	
	
	printf("\nhow many numbers you have in the second set:");
	scanf("%d",&n2);
	
	
	printf("\ninput your  numbers:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ara2[i]);
	}
	
	
	for(i=0;i<n1;i++)
	{	
		for(j=0;j<n2;j++)
		{
			if(ara1[i]==ara2[j])
			{
				inter[con]=ara1[i];
				con++;
			}
			
		}
		
	}
	
	printf("\nthe intersection:");
	for(i=0;i<con;i++)
	{
		printf("%d ",inter[i]);
	}
	
	
	
	printf("\nthe union of the sets is:");
	for(i=0;i<n1;i++)
	{
	    printf("%d ",ara1[i]);
			
	}
	
	
	
      int scon=0;
      int k;
      for(i=0;i<con;i++)
      {
      	   for(j=0;j<n2-scon;j++)
      	   {
      	   	     if(inter[j]==ara2[i])
      	   	     {     
      	   	              scon++;
                          for(k=i;k<n2-scon;k++)
                          { 
                            	ara2[k]=ara2[k+1];	
                          } 
						  goto m;	
      	   	     }
      	   }
      	   m:;
      }


     for(i=0;i<n2-scon;i++)
	 {
	     printf("%d ",ara2[i]);
			
	 }


}
