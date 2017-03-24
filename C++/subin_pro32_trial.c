#include<stdio.h>
int minus(int a,int b)
{
	int n;
	n=a-b;
	if(n<0) n=n*-1;
	return(n);
}
main ()
{
	int a,b,c,a1,b1,c1;
	int inp[8];
	int i;
	    for(i=0;i<8;i++)
	    {
		    scanf("%d",&inp[i]);
	    }
	    a=minus(inp[1],inp[7]);
	    b=minus(inp[1],inp[3]);
	    c=minus(inp[5],inp[7]);
	    a1=minus(inp[0],inp[6]);
	    b1=minus(inp[0],inp[2]);
	    c1=minus(inp[4],inp[6]);
	    if(b+c>a&&b1+c1>a1)
	    {
		   printf("\nyes");
	    }
	    else
	    {
		   printf("\nno");
	    }
	
}
