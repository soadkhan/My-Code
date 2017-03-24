#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[1100];
	int i,j,l,con=0;
	gets(str);
	l=strlen(str);
	
	for(i=97;i<=122;i++)
	{
		for(j=1;j<l-1;j=j+3)
		{
			if(i==str[j])
			{
				con++;
				break;
			}
		}
	}
	
	printf("%d\n",con);
	
	return 0;
}
