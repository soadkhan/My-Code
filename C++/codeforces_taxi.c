#include<stdio.h>
int main (void)
{
	long int ar;
	long int i,n,sum=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&ar);
		sum=sum + ar;
	}
	for(i=0;;i++)
	{
		if(i*4>=sum){
			printf("%ld\n",i);
			return 0 ;
		}
		
	}	
	return 0 ;
}
