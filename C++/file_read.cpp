#include<stdio.h>
main ()
{
	FILE *object1;
	object1=fopen("document1.txt","r");
	char go[100];
	fgets(go,100,object1);
	puts(go);
	
	
	
	
}
