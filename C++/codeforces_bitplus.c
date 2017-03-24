#include<stdio.h>

int main (void)
{
	int n , i,x;
	char str[10];
	x=0;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		   scanf("%s",str);
		   if(str[0]=='+')  ++x;
		   if(str[0]=='-')  --x;
		   if(str[2]=='+')  x++;
		   if(str[2]=='-')  x--;
	}
	printf("%d\n",x);
	
	return 0 ;
}
