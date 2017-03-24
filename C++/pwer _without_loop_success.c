#include<stdio.h>
int n;
int p;
int output=1;
int check=0;
void go_one(void)
{
	check++;
	output=output*n;
	if(check!=p)
	{
		go_one();
	}
}

main ()
{
	scanf("%d %d",&n,&p);
	if(p!=0)   go_one();
	if(p==0)   output=1;
	printf("%d",output);
}
