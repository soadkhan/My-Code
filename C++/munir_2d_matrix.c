#include<stdio.h>

void func(int li , int n)
{
	
	int i,k;
	if(n%2==0)
	{		
		  k=n/2;
		  
		  for(i=1;i<=k;i++)
		  {
		  	  if(i>li) printf("%d ",li);
		  	  else printf("%d ",i);
		  }
		  
		  for(i=k;i>=1;i--)
		  {
		  	  if(i>li) printf("%d ",li);
		  	  else printf("%d ",i);
		  }
		  
	}
	
	if(n%2==1)
	{
		
		k=(n-1)/2;
		
		for(i=1;i<=k;i++)
		{
		     if(i>li) printf("%d ",li);
		  	  else printf("%d ",i);
		}
		
		if(k+1>li) printf("%d ",li);
	    else  printf("%d ",k+1);
	    
		for(i=k;i>=1;i--)
		{
			 if(i>li) printf("%d ",li);
		  	else printf("%d ",i);
    	}
    	
	}
	
		printf("\n");
}

int main (void)
{
	
	int n,i,k;
	
	while(4)
	{
		
	    scanf("%d",&n);
	    if(n==0)  return 0 ;
	    
	    if(n%2==0)
	    {		
		     k=n/2;
		     
		     for(i=1;i<=k;i++)
		     {
		  	      func(i,n);
		     }
		     for(i=k;i>=1;i--)
		     {
		  	      func(i,n);
		     }
	    }
	    
	    if(n%2==1)
	    {
		    k=(n-1)/2;
		    
		    for(i=1;i<=k;i++)
		    {
		       func(i,n);
		    }
		    
	        func(k+1,n);
	        
		    for(i=k;i>=1;i--)
		    {
			   func(i,n);
    	    }
	    }
	    
	    printf("\n");
	    
    }
    
	return 0 ;
}
