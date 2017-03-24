#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

main ()
{
//	char* str;
//	str=malloc(100*sizeof(char));
	float num;	
	scanf("%g",&num);
	printf("%g",num);
    
	int in;
	int i=0;
	in=(int) num;
	///printf("%d",in);
	while(num-in>0)
	{
		i++;
		num=num*10;
		in=(int) num;
		printf("\n%.2f   %d",num,in);
	}
	
//	printf("\n%d",i);
	printf("\n%d   %.2f",i,num);
	
	
	
}
