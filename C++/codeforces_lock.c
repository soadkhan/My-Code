#include<stdio.h>
int main(void)
{
	int i,j,un,pr,con,n;
	scanf("%d",&n);
	un=n-1;
	pr=1;
	con=un+pr;
	while(4)
	{
		if(un==0)
	    {
	    	printf("%d\n",con+n-1);
	    	return 0;
	    }
    	un=un-1;
	    pr=pr*un;
	    con=con+un+pr;
	
    }
	return 0;
}
