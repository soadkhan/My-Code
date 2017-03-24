#include<stdio.h>
#include<string.h>
#include<conio.h>
main ( )
{
    int n;
    char a[100];
    //printf("aaaaaaaaa\n");
    scanf("%d",&n);
    goto m;
    //printf("aaaaaaaaa\n");
    //scanf("%[^\n]",&a);
    m:gets(a);
    goto n;
    n:printf("\n%s \n%d",a,n);

}

