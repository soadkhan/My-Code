#include<stdio.h>

int main ()
{
	int arra[10000];
	int i=2 ,dif;
	scanf("%d  %d ",&arra[0],&arra[1]);
	
	while(4)
	{
		 scanf("%d",&arra[i]);
		 
		 if(arra[i]>arra[i-1]||arra [i]>arra[i-2])	return 0 ;
		 
		 if(arra[i-1]-arra[i-2]<0) dif=(arra[i-1]-arra[i-2])*-1;
		 else  dif=arra[i-1]-arra[i-2];
		 
		 if(arra[i]<dif) return 0 ;
		 
		 i++;
	}
}
