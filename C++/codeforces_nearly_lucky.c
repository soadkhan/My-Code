#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	int i,j,con=0;
	int ara[6]={4,7,44,77,47,74};
	gets(str);
	j=strlen(str);
	for(i=0;i<j;i++)
	{
		if(str[i]=='4'||str[i]=='7') con++;
	}
    for(i=0;i<6;i++)
    {
    	if((con==ara[i]))
    	{
    		printf("YES\n");
    		return 0;
    	}
    }
	printf("NO\n");
	return 0;
}
