#include<stdio.h>
int main (void)
{
	long int in , out , max , s, i,n ;
	scanf("%ld",&n);
	max=0;
	s=0;
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld", &out ,&in);
		s=s-out+in;
		if(s>max) max=s;
	}
	printf("%ld\n",max);
	return 0 ;
}
