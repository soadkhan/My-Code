#include<stdio.h>
#include<string.h>
main ()
{
	int i,j,con=0;
	int n;
	char str[1000];
	
	printf("input your number in decimal: ");
    
    scanf("%d",&n);
    
    for(i=0;;i++)
    {
    	if(n<8)
    	{
    		str[i]=n%8+48;
    		break;
    	}
    	str[i]=n%8+48;
    	n=n/8;
    }
    str[i+1]='\0';
    
    strrev(str);
    
	printf("\nyour number in octal is: %s",str);    
	
}
