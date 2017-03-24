#include<stdio.h>
long int move(long int n1,long int n2)
{
	long int sm, bi;
	if(n1==n2) return 0;
	if(n1>n2) 
	{
		sm=n2;
		bi=n1;
	}
	if(n1<n2)
	{
		bi=n2;
		sm=n1;
	}
	if((sm+10-bi)>=0)
	{
	
	  if((bi-sm)<(sm+10-bi))
	  {
	    	return (bi-sm);
	  }
	  else
	  { 
	    	return (sm+10-bi);
	  }
    }
    else
    {
    	return (bi-sm);
    }
}
int main(void)
{
	long int l,i;
	char str1[1100];
	char str2[1100];
	long int sum=0;
	scanf("%ld",&l);
	getchar();
	scanf("%s",&str1);
	scanf("%s",&str2);
	for(i=0;i<l;i++)
	{
		sum=sum+move(str1[i]-48,str2[i]-48);
	//	printf("%ld ",move(str1[i]-48,str2[i]-48));
	}
	printf("%ld\n",sum);
	return 0;
}
