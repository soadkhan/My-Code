#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,n,l;
	char sen[100];
	int spa[100];
	int che[100];
	printf("input your sentence\n");
	gets(sen);
	l=strlen(sen);
	j=0;
	for(i=l-1;i>=0;i--)
	{
		if(sen[i]==' ')
		{
			spa[j]=i;
			j++;
		}
	}
	spa[j]=-1;
	spa[j+1]='\0';
	n=j+1;
    j=0;
    che[j]=l;
    for(j=1;j<n;j++)
    {
    	che[j]=spa[j-1];
    }
    che[n]='\0';
       for(i=0;i<n;i++)
       {
       	   for(j=spa[i]+1;j<che[i];j++)
       	   {
       	    	printf("%c",sen[j]);
       	   }
       	   printf("\n");
       }
}
