#include<stdio.h>
#include<string.h>
int main(void)
{
	long int a,n,l,i,j;
	char str[10000];
	scanf("%ld %ld",&a,&n);
	getchar();
	gets(str);
	l=strlen(str);
	for(j=0;j<n;j++)
	{
		for(i=0;i<l-1;i++)
		{
			if(str[i]=='B' && str[i+1]=='G')
			{
				str[i]='G';
				str[i+1]='B';
				i++;
			}
		}
	}
	printf("%s\n",str);
	return 0;
}
