#include<stdio.h>
#include<string.h>
main ()
{
	int i,r,c,j,l;
	char sen[100];
	char twodim[100][100];
	printf("input your sentence:\n");
	gets(sen);
	r=0;
	c=0;
	for(i=0;i<strlen(sen);i++)
	{
		if(sen[i]!=' ')
		{
			twodim[r][c]=sen[i];
			c++;
		}
		if(sen[i]==' ')
		{
			twodim[r][c]='\0';
			r++;
			c=0;
		}
		
	}
	for(i=r;i>=0;i--)
	{
		printf("\n%s",twodim[i]);
	}
}
