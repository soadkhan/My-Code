#include<stdio.h>
#include<string.h>
main ()
{
	char str[1000];
	char sp;
	int count=0;
	int i,j;
	printf("string:");
	gets(str);
	printf("\ncharacter:");
	scanf("%c",&sp);
	j=strlen(str);
	printf("\n\n\n");
	  for(i=0;i<j;i++)
	  {
	  	 if(str[i]==sp)
	  	 {
	  	 	count++;
	  	 }
	  }
	  for(i=0;i<j;i++)
	  {
	  	if(str[i]==sp)
	  	{
	  		printf("%d",count);
	  	}
	  	else
	  	{
	  		printf("%c",str[i]);
	  	}
	  }
}
