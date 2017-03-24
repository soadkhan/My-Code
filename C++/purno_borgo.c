#include<stdio.h>
#include<math.h>
main ()
{
	float num;
	float rot;
    int test;
    scanf("%f",&num);
    rot=sqrt(num); 
    test=(int) rot;
    num=(float) test;
    num=rot-num;
    if(num>0)
    {
    	printf("\nNO");
    }
    if(num==0)
    {
    	printf("\nYES");
    }
}
