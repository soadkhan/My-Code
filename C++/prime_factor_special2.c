#include<stdio.h>
main ()
{
	 int i,j,f=1 ;
	 int l1=0;
	 int ln;
	 int num[1000];
	 int fac[1000];
	 int che[1000];
     int n;
     int n2;
     int lo;
     
    	 
	 
	 scanf("%d",&num[0]);
	 if(num[0]<2) goto l1;
	 for(i=1;num[i-1]>=2;i++)
	 {
	 	scanf("%d",&num[i]);
	 }
	 ln=i;
	 
	 printf("output\n");
	 
	 
  for(lo=0;lo<ln;lo++)
  {
  	 
	 n2=num[lo];
	
	
	
	 for(i=2;i<=num[lo];i++)
     {	
    	m:num[lo]=num[lo];
		if(num[lo]%i==0)
		{
			num[lo]=num[lo]/i;
			fac[l1]=i;
			l1++;
			goto m;
	    }
	 }
	 fac[l1]='\0';
	
	int l2;
	l2=1;
	int f2=0;
	
	che[0]=fac[0];
	
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(fac[i]==che[j])
			{
				f2=1;
			}
		
		
		}
			if(f2==0)
			{
				che[l2]=fac[i];
				l2++;
			}
		f2=0;
	}
	
	che[l2]='\0';



       int con=0;
       int g=0;
       if(lo!=ln-1) printf("%d=",n2);
        for(i=0;i<l2;i++)
       {
       	  for(j=0;j<l1;j++)
       	  {
       	  	     if(che[i]==fac[j])
       	  	     {
        	  	 	     con++;
       	  	     }
       	  	
       	  	
       	  }
       	  if(con!=0)
			 {
			 
			  printf("%d^%d",che[i],con);
			  g++;
			  if(g<l2)
			  {
			  	printf("*");
		      }
             }
       	  con=0;
       	 
       	
       }


      f=1;
      l1=0;
      l2=0;
      g=0;
      con=0;
    
    
    
    
     printf("\n");  
    
    
  
    

 
  }


 l1:;
} 
