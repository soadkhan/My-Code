#include<stdio.h>
int main(void)
{
	long int ara[100000];
	long int d,k,l,m,n,i,sum=0;
	scanf("%ld  %ld  %ld  %ld  %ld",&k ,&l ,&m ,&n ,&d);
	for(i=0;i<d;i++)
	{
		if((i+1)%k==0||(i+1)%l==0||(i+1)%m==0||(i+1)%n==0)  ara[i]=1;
		else  ara[i]=0;
        sum=sum+ara[i];		
	}
	
	printf("%ld\n",sum);
	
	
	return 0;
}
