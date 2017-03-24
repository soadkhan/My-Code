#include<stdio.h>
main ()
{
     int n;
     int out;
     scanf("%d",&n);
     if(n==1)
     {
         out=3+48;
     }
     if(n<=5&&n!=1)
     {
         out=2*n-1+48;
     }
     if(n>5)
     {
         out=2*n-1+55;
     }
     printf("\n%c",out);

}
