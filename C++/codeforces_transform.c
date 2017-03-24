#include<stdio.h>
#include<string.h>
int main(void)
{
	
    char str[50];
    int fl=0,i;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
    	    if(i==0&&str[i]=='9'){
    	    	continue;
    	    }
    	    if(str[i]>'4'){
    	    	str[i]='9'-str[i]+48;
    	    }	
    }
    
    printf("%s\n",str);
    
	return 0;
}
