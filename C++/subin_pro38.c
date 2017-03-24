#include<stdio.h>
#include<string.h>
main ()
{
	char mai[1000];
	char sub[1000];
	int i,j,con,l,n,lo,fl;
	int out[1000];
	printf("how many test cases you have?:\n");
	scanf("%d",&n);
	printf("\ninput as....\nmain srting<space>sub string\n\nnow input........");
	for(lo=0;lo<n;lo++)
	{
		printf("\n\ncase %d :",lo+1);
		if(lo==0) getchar();
	    scanf("%s",&mai);
	    scanf("%s",&sub);
	    fl=0;
	    con=0;
	    l=strlen(mai)-strlen(sub);
	    for(i=0;i<=l;i++)
	    {
		    for(j=0;j<strlen(sub);j++)
		    {   
			    if(mai[i+j]!=sub[j])
			    {
				    fl=1;
			    }
		    }
		    if(fl==0)
		    {
		        con++;	
		    }
		    fl=0;
	    }
        out[lo]=con;        	
    }
    printf("\noutput........");
    for(i=0;i<n;i++)
    {
    	printf("\n\ncase %d : %d",i+1,out[i]);
    }
}
