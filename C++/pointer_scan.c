#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
main()
{
	int *p;
	p=malloc(sizeof(int));
	scanf("%d",p);////           experiment successful.....................
	printf("%d",*p);	
}
