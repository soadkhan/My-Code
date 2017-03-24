#include<stdio.h>
int main(void)
{
	 int i,j,n,c2,temp,n1=0;
	 int ara[1000];
     int con=0;
	int fl=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	{
		for(j=0;j<=i;j++)
	
	for(i=n-1;i>=0;i--)
		{
			if(ara[j]<ara[j+1])
			{
				temp=ara[j+1];
				ara[j+1]=ara[j];
				ara[j]=temp;
			}
		}
	}
	
    for(i=0;i<n;i++)
    {
    		if(ara[i]==4)
    		{
    			con++;
    			continue ;
    		}
    		
    		if(ara[i]==3)
    		{
    			con++;
    			for(j=i+1;j<n;j++)
    			{
    				if(ara[j]==1)
    				{
    					ara[j]=0;
    					break ;
    				}
    			}
    			continue ; 
    		}
    		if(ara[i]==2)
    		{
    			fl=1;
    			for(j=i+1;j<n;j++)
    			{
    				if(ara[j]==2)
    				{
    					ara[j]=0;
    					con++;
    					fl=0;
    					break;
    				}
    			}
    			if(fl==1) {
    				break ; 
    				
    			}
    			else continue ;
    		}
    		if(ara[i]==1)
    		{
    			break;
    		}
    		        
    }
   
   if(fl==0) c2= 0;
   if(fl==1) c2=1;
 
   for(j=i;j<n;j++)
   {
   	  if(ara[j]==1)
   	  {
   	  	  n1++;
   	  }
   }

   
   if(c2==1)
   {
   
        if(n1<=2) {
   	       n1=0;
        }
        else
       {
   	      n1=n1-2;
   	      if(n1%4==0) n1=n1/4;
   	      else n1=(n1/4) + 1;
   	      
       }
       printf("%d\n",con + c2 + n1 );	
	return 0 ; 
   }
   
   if(c2==0)
   {
   	if(n1==0)
   	{
   		n1=0;
   	}
   	else
   	{
   		
   		if(n1%4==0) n1=n1/4;
   		else n1 = (n1/4) +1 ;
   	
    }
     printf("%d\n",con + c2 + n1 );	
	return 0 ;
   }
  
}
