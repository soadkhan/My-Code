#include<stdio.h>

int main(){

    //float a , b ;

    //scanf("%f%f" , &a , &b) ;
    //printf("%.3f", a+b) ;

    int a  ;
    a  = 12 ;
    printf("%d\n", a) ;
    printf("%4d\n", a) ;
    printf("%-4d%-4d\n", a , a) ;
    printf("%04d\n", a) ;

    float b = 12.2 ;

    printf("%f\n" , b) ;
    printf("%.2f\n" , b) ;
    printf("%6.2f\n" , b) ;
    printf("%06.2f\n" , b) ;
    printf("%-6.2f%-6.2f\n" , b , b ) ;

    int c , d ;
    scanf("%d%d" , &c , &d) ;
    printf("%d" , c-c/d*d ) ;


    return  0 ;
}
