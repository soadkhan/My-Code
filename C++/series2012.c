#include<stdio.h>
int main ()
{
	int i=1 ;
	int bi=52;
	while(bi!=0)
	{
		bi=bi-2;
		if(i%2==1) printf("%d\n",bi*-1);
		else printf("%d\n",bi);
		i++;
		
		
		
	}
	
	return 0 ;
}
