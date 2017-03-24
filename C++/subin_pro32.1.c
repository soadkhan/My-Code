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
	int inp[1000][8];
	int i;
	int n;
	int lo;
	printf("how many cases you have:\n");
	scanf("%d",&n);
	printf("\ninput as \nx1 y1 x2 y2\nx2 y2 x3 y3\nnow input\n");
	for(lo=0;lo<n;lo++)
	{
        for(i=0;i<8;i++)
	    {
	        scanf("%d",&inp[lo][i]);
	        if(inp[lo][i]<-100||inp[lo][i]>100)
	        {
	        	printf("\nerror number.\n");
	        	goto m; 
	        }
	    }
    }
    printf("\noutput..........\n");
    for(lo=0;lo<n;lo++)
	{   
	    printf("\ncase %d :",lo+1);
	    a=minus(inp[lo][1],inp[lo][7]);
	    b=minus(inp[lo][1],inp[lo][3]);
	    c=minus(inp[lo][5],inp[lo][7]);
	    a1=minus(inp[lo][0],inp[lo][6]);
	    b1=minus(inp[lo][0],inp[lo][2]);
	    c1=minus(inp[lo][4],inp[lo][6]);
	    if(b+c>a&&b1+c1>a1)
	    {
		   printf(" yes");
	    }
	    else
	    {
		   printf(" no");
	    }
    }
    m:;
}
