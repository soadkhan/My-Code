#include<stdio.h>
int main(void)
{
	long long int dol,cos,in,num;
	scanf("%I64d %I64d %I64d",&in,&dol,&num);
	cos=in*num*(num+1)/2;
	if(cos<=dol) printf("0\n");
	else printf("%I64d\n",cos-dol);
	return 0;
}
