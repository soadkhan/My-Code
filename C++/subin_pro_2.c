#include<stdio.h>
#include<string.h>
main ()
{
	int i,k,j,f,l;
	char ara[100][100];
	int res[100];
	j=0;
	i=0;
	k=1;
	scanf("%d",&f);
	for(i=0;i<f;i++)
	{
		getchar();
		gets(ara[i]);
		l=strlen(ara[i]);
		for(j=0;j<l;j++)
		{
			if(ara[i][j]==' ')
			{
				k++;
			}
		}
		res[i]=k;
		k=1;
	}
	res[i]='\0';
	printf("output");
	for(i=0;res[i]!='\0';i++)
	{
		printf("\n%d",res[i]);
	}
}
