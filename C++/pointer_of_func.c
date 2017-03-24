#include<stdio.h>

void func1(void)
{
	printf("aaaaaaa");
}

int func2(void)
{
	printf("\nbbbbbbb");
	return 0;
}

int func3(int a,int b )
{
	printf("\n%d  %d",a,b);
	return 0;
}


main ()
{
	 
	  void (*pt1) (void);
	  int (*pt2) (void);
	  int (*pt3) (int,int);
	  int g,h;
	  
	  
	  pt1=func1;
	  pt2=func2;
	  pt3=func3;
	  
	  
	  (*pt1) ();
	  (*pt2) ();
	  (*pt3) (20,30);
	  
	
}



