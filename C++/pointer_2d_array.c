#include<stdio.h>

main ()

{
	
	 int x[100][100];
     int* p[100];
    
     int n;
     scanf("%d",&n);
     int i,j;
     for(i=0;i<n;i++)
     
     {
     	p[i]=x[i]; 	
     }
    
     for(i=0;i<n;i++)
     {
     	for(j=0;j<n;j++)
     	{
     		scanf("%d",p[i]+j);
     	}
     }
    
    
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d ",*(p[i]+j));
    	}
    	printf("\n");
    }
    
    
}
