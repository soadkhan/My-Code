#include<stdio.h>
int main()
{
	
	int a,b;
	char c;
	scanf("%c",&c);
	scanf("%d%d",&a,&b);
//	printf("%d %d %c",a,b,c);
	
	switch(c){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		default :
			printf("error code");
			break;
	}
	return 0;
}
