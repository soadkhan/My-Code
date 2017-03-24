#include<stdio.h>
main ()
{
    int a=10;                       // line 1
    int   b=12;                 //line 2
    int*  c;                        //line 3
    c=&a;                           //line 4
    printf("%x\n",&a);           //line 5
   printf("%d\n",a);                  //line 6
    printf("%x\n",&b);      //line 7
    printf("%x\n",c);            //line 8
}

