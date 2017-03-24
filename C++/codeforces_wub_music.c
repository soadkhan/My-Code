#include<stdio.h>
int main(void)
{
	char str[220],*p;
	int fl=0,fl2=0;
	scanf("%s",&str);
	p=str;
	while(4)
	{
		if(*p=='\0')
		{
			printf("\n");
			return 0;
		}
	    if(*p=='W'&&*(p+1)=='U'&&*(p+2)=='B')
	    {
	    	p=p+3;
	    	fl=1;
	    }
	    else
	    {
	    	if(fl==1&&fl2==1)
	    	{
	    		printf(" ");
	    	}
	    	printf("%c",*p);
	   		fl2=1;
	   		fl=0;
	   		p=p+1;
	    	
	    } 
	}
	return 0;
}
