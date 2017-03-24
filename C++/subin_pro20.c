#include<stdio.h>
#include<string.h>
main ()
{
	int time,one,zero,i,j,l,f;
	char str[100][1000];
	char comment[10][1000];
	char com1[10]={"normal"};
	char com2[10]={"magic"};
	printf("how many times you want to run the process?:\n");
	scanf("%d",&time);
	for(i=0;i<time;i++)
	{
		one=0;
		f=0;
		zero=0;
		if(i==0) getchar();
		gets(str[i]);
		l=strlen(str[i]);
		for(j=0;j<l;j++)
		{
			if(str[i][j]=='1')
			{
				one++;
			}
		    if(str[i][j]=='0')
		    {
		    	zero++;
		    }
		   
		    if(zero>one)
		    {
			strcpy(comment[i],com2);
			f=1;
		    }
		    if(f==0)
		    {
		     strcpy(comment[i],com1);
		    }
		    
		}
	}
	printf("\noutput;");
	for(i=0;i<time;i++)
	{
	     printf("\n%s",comment[i]);		
	}
	
}
