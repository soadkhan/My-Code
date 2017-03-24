#include<stdio.h>
#include<string.h>
main ()
{
	int i,l,k;
	char wor[100];
	int  output=1;
	printf("input your word to check this polindrom or not:\n");
	gets(wor);
	l=strlen(wor)-1;
	k=strlen(wor)/2;
	for(i=0;i<k;i++)
	{
		if(wor[i]!=wor[l])
		{
			output=0;
		}
		l--;
	}
	if(output==1)
	{
		printf("\nyour word is a polindrom.");
	}
	if(output==0)
	{
		printf("\nyour word is not a polindrom.");
	}	
}
