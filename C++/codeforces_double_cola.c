//"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" 
#include<stdio.h>
int main(void)
{
	long int n;
	scanf("%ld",&n);
	
	if(n%11==1||n%11==6||n%11==7) printf("Sheldon\n");
	if(n%11==2||n%11==8||n%11==9) printf("Leonard\n");
	if(n%11==0||n%11==10||n%11==3) printf("Penny\n");
	if(n%11==4) printf("Rajesh\n");
	if(n%11==5) printf("Howerd\n");

	return 0 ;
}
