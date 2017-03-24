#include<stdio.h>
int main (void)
{
	long int n1=0,n2=0,n3=0,n4=0,s2=0;
	long int n,i,in,n2o;
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
   if(n1!=0)
   {
   	   n2o=n1%4;
   	   n1=n1/4;
   	   if(n2o<3)
   	   {
   	   	    s2=1;
   	   }
   	   else
   	   {
   	   	   s2++;
   	   }

   }
  printf("%ld\n",n1+n2+n3+n4+s2);
	return 0 ;
}
