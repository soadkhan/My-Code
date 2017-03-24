#include<stdio.h>
#include<string.h>
int main (void)
{
	int i=1,l,fl=1;
	char str[200];
	scanf("%s",&str);
	l=strlen(str);
	if(str[1]=='\0')
	{
		if(str[0]>='a'&&str[0]<='z')
		{
			str[0]=str[0]-32;
			printf("%s\n",str);
			return 0 ;
		}
		else
		{
			str[0]=str[0]+32;
			printf("%s\n",str);
			return 0 ;
		}
		
	}
	for(i=1;i<l;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			fl=0;
		}
		
	}
	if(fl==1)
	{
		for(i=0;i<l;i++)
		{
				if(str[i]>='a'&&str[i]<='z')
		        {
			         str[i]=str[i]-32;
		        }
		        else
		        {
		        	str[i]=str[i]+32;
		        }
		}
		printf("%s\n",str);
		return 0 ;
	}
	
	else
	{
		printf("%s\n",str);
	}
	return 0 ;
}
