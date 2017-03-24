#include<stdio.h>
main ()
{
	int input1,input2,k;
	int  count=1;
	int output=0;
	int j;
	scanf("%d %d",&input1, &input2);
	k=input1;
    for(j=input1;input1<=input2;input1++)
    {
	   while(j!=1)
       {
	       if(j%2==0)
	      {
	  	      j=j/2;
	      }	
	      else
	      {
	  	     j=3*j+1;
	      }
	      count++;
	   }
	   if(count>output)
	   {
		  output=count;
	   }
	   count=1;
	   j=input1;
    }
 printf("%d %d %d",k,input2 ,output);
}
