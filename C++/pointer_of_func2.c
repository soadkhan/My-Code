#include<stdio.h>

int maxvalue(int a,int b)
{
	if(a>b) return a;
	else return b;
}


int minvalue(int a,int b)
{
	if(a<b) return a;
	else return b;
}


int result(int a,int b,int (*ptr)(int ,int))
{	
	return((*ptr)(a,b));
}


main ()
{
	
	printf("the greater of 12 and 13 is : %d",result(12,13,maxvalue));
	printf("\nthe less if 12 and  13 is :%d",result(12,13,minvalue));
} 
