#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[200],*pso ,*psz;
	char sub1[]={"1111111"};
	char sub0[]={"0000000"};
	gets(str);
	pso=strstr(str,sub1);
	psz=strstr(str,sub0);
	
	if(pso==NULL&&psz==NULL) printf("NO\n");
	else printf("YES\n");
	return 0 ;
}
