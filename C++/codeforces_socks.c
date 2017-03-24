#include<stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d %d",&n,&m);
	if(n==1)
	{
		printf("1\n");
		return 0;
	}
	n=n-1;
	for(i=2;;i++)
	{
		 if((i-1)%m==0)
		 {
		 	n=n+1;
		 }
	   	 if(n==0) 
		 {
		 	printf("%d\n",i-1);
		 	return 0;
		 }		 
		 n=n-1;
	}	
	return 0;
}
