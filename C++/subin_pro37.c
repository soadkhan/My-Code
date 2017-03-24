#include<stdio.h>
#include<string.h>
main ()
{
  char mai[1000];
  char sub[1000];
  int out[1000];
  int i,k,n,j,con,l,lo,fl=0;
  printf("how many test cases you have?:\n");
  scanf("%d",&n);
  printf("\nposition begins with 0 \n\n\ninput as.....\nmain string<space>sub string\n\n\nnow input........\n\n");
  con=0;
  for(lo=0;lo<n;lo++)
  {
  	printf("\ncase %d: ",lo+1);
    k=-1;
  	if(lo==0) getchar();
  	scanf("%s",&mai);
	scanf("%s",&sub);
	if(strlen(sub)>strlen(mai))
	{
		goto m;
	}
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
			k=i;
			goto m;
		}
		fl=0;
	}
	m:out[con]=k;
	con++;
 }
  printf("\noutput.............");
  for(lo=0;lo<n;lo++)
  {
  	printf("\n\ncase %d :",lo+1);
  	if(out[lo]!=-1)
  	{
      printf("%d",out[lo]);  		
  	}
  	if(out[lo]==-1)
  	{
  	  printf("no matching is found.");
  	}
  }
}
