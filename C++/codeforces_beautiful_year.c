#include<stdio.h>
int check(int n)
{
    int i,l, j ;
	char str[5];
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
			return 0;
		}  
	}
	return 1;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	while(4)
	{
		n++;
		if(check(n)==1)
		{
		 printf("%d\n",n);
	     return 0;
        }
	}  
	return 0;
}
