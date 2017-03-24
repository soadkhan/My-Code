#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	int i,l, j ;
	char str[10];
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		str[i]=n%10+48;
		n=n/10;
		i++;
	}
	str[i]='\0';
	l=i;
	for(i=0;i<l;i++)
	{
		n=0;
		  for(j=0;j<l;j++)
		  {
		  	    if(str[i]==str[j])
		  	    {
		  	    	
		  	    	n++;
		  	    }
		  	
		  	
		  }
		if(n>1)
		{
			printf("0");
			return 0;
		}  
		
	}
	
	printf("1");
	return 0;
}
