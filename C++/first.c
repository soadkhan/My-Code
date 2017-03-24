#include<stdio.h>
main()
{
    int a , b , c , n  , i;
    scanf("%d" , &n) ;
    a = 1 ;
    b = 1 ;
    for(i = 1 ; i<= n ; i++)
    {..........................
        printf("%d " , a)  ;
        c = a + b;
        a = b ;
        b = c ;
    }
}
