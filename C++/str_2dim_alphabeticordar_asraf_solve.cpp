#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,n;
	char st[100][100];
	char temp[100];
	printf("how many string you have?:\n");
	scanf( "%d",&n);
	for( i=0;i<n;i++)
	{
		scanf("%s",&st[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(strcmp(st[j],st[j+1])>0)
			{
				strcpy(temp,st[j+1]);
				strcpy(st[j+1],st[j]);
				strcpy(st[j],temp);
			}
		}
	}
	printf("here we go.......\n\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",st[i]);
	}
}
