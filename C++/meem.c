//ternary operator//
//to find the biggest//
#include<stdio.h>
int main()
{
    int a,b,c,d,max;
    printf("enter the four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=(a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):((c>d)?c:d));
    printf("%d is the biggest",max);
    return 0;
}
