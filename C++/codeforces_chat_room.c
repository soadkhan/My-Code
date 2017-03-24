#include<stdio.h>
int main (void)
{
	char str[200],*p;
	char he[]={"hello"};
	int i,j,con=0;
	scanf("%s",&str);
	p=str;
	j=0;
	for(i=0;*p!='\0';i++)
	{
		if(*p==he[j])
		{
			j++;
			con++;
		}
		p=p+1;
	}
	if(con==5) printf("YES\n");
	else printf("NO\n");	
	return 0;
}
