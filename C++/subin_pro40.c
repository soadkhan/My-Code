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
	
    int input[1000][4];
    int n,lo;
    printf("how many test cases you have?:\n");
    scanf("%d",&n);
    printf("\ninput as\nr1 c1 r2 c2\nnow input......\n");
	int i,x,y;
	for(lo=0;lo<n;lo++)
	{
	   printf("\ncase %d :",lo+1);
	   for(i=0;i<4;i++)
	   {
		   scanf("%d",&input[lo][i]);
		   if(input[lo][i]>1000||input[lo][i]<0)
		   {
		   	  printf("\nerror number..... \nyou have to input positive and <=1000 .\n");
		   	  goto m;
		   }
	   }
    }
    printf("\noutput........\n");
    for(lo=0;lo<n;lo++)
    {
    
	   x=minus(input[lo][1],input[lo][3]);
	   y=minus(input[lo][0],input[lo][2]);
	   if(y<x)
	   {
		  y=x;
	   }
	   printf("\n\ncase %d : %d",lo+1,y);
    }
    m:printf("\n\n\n\n\n\n\n");
}
