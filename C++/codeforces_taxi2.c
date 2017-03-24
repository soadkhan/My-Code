#include<stdio.h>
int main(void)
{
	long int n,i;
	long int con1=0;
	long int con2=0;
	long int con3=0;
	long int con4=0;
	long int c2=0;
	long int ar;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&ar);
		if(ar==1) con1++;
		if(ar==2) con2++;
		if(ar==3) con3++;
		if(ar==4) con4++;
	}
   if(con2%2==0)
   {
   	con2=con2/2;
   	c2=0;
   }
   if(con2%2==1)
   {
   	 con2=con2/2;
   	 c2=1;
   }
   if(con1==0||con1<=con3)
   {
   	    con1=0;
   	    printf("%ld\n",con1+con2+con3+con4+c2);	
	    return 0 ;
   }
   if(con1>con3)
   {
   	    con1=con1-con3;
   	    if(con1%4==0)
   	    {
   	    	con1=con1/4;
   	    	printf("%ld\n",con1+con2+con3+con4+c2);	
	        return 0 ;
   	    }
   	    if(con1%4==2||con1%4==1)
   	    {
   	    	con1=con1/4;
   	    	if(c2==0) c2=1;
   	    	printf("%ld\n",con1+con2+con3+con4+c2);	
	        return 0 ;
   	    }
   	    if(con1%4==3)
   	    {
   	    	con1=con1/4;
   	    	c2++;
   	    	printf("%ld\n",con1+con2+con3+con4+c2);	
	       return 0 ;
   	    }
   }	
}
