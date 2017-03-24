#include<stdio.h>
main ()
{
	int* p=NULL;
	int i;
    if(p==NULL) printf("f  %X",p);
	p=&i;
	printf("\n%X   %X",p,&i);
	
}
