#include<stdio.h>

int main (void)
{
	int n,i,k,li;
//	printf("coulumns : ");
//	scanf("%d",&n);
//	printf("limil : ");
//	scanf("%d",&li);
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
	
	return 0 ;
}
