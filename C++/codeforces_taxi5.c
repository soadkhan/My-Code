#include<stdio.h>
int main (void)
{
	long int n1=0,n2=0,n3=0,n4=0,s2=0;
	long int n,i,in,n2o,con;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&in);
		if(in==1) n1++;
		if(in==2) n2++;
		if(in==3) n3++;
		if(in==4) n4++;
	}
   n1=n1-n3;
   if(n1<0) n1=0;
   if(n2%2==1) s2=1;
   n2=n2/2;
   con = n4 + n3 + n2 ;
   if(s2==1)
   {
   	     if(n1<=2) n1=0 ;
   	     else
   	     {
   	     	n1=n1-2;
   	     	if(n1%4==0)  n1=n1/4;
   	     	else n1=(n1/4) +1 ;
   	     }
   	     printf("%ld\n",con + n1 +s2 );
   	     return 0 ;
   }
   if(s2==0 )
   {
   	  if(n1==0) n1=0 ;
   	  else
   	  {
   	  	   if(n1%4==0)  n1=n1/4;
   	  	   else n1=(n1/4) + 1 ;
   	  	
   	  }
   	  printf("%ld\n",con + n1 +s2 );
   	  return 0 ;
   }	
	return 0 ;
}
