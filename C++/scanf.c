#include<stdio.h>
#include<string.h>
main ( )
{
    int n;
    char a[100];
    printf("input a number:\n");
    scanf("%d",&n);
    printf("input a sentence:\n");
    gets(a);
    gets(a);
    printf("\n%s \n%d",a,n);
}
