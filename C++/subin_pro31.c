#include<stdio.h>
#include<string.h>
main ()
{
	int input[1000];
	int che[5]={31104000,2592000,86400,3600,60};
	int i,n;
	int num[6];
	char sin[6][10]={"year","month","day","hour","minute","second"};
	char plu[6][10]={"years","months","days","hours","minutes","seconds"};
	printf("input the number of cases\n");
	scanf("%d",&n);
	printf("\ninput your seconds\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&input[i]);
	}
	printf("\noutput.........\n");
	int lo;
    for(lo=0;lo<n;lo++)
    {    
 	    printf("\ncase %d :",lo+1);
	    for(i=0;i<5;i++)
	    {
		    num[i]=input[lo]/che[i];
		    input[lo]=input[lo]%che[i];
	    } 
	    num[5]=input[lo];
	    for(i=0;i<6;i++)
	    {
		    if(num[i]!=0&&num[i]==1)
		    {
			    printf(" %d %s ",num[i],sin[i]);
		    }
		    if(num[i]!=0&&num[i]!=1)
		    {
			    printf(" %d %s",num[i],plu[i]);
		    }
	    }
	    printf("\n");
    }
    printf("\n\n\n\n\n\n");

}
