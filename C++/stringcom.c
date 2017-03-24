#include<stdio.h>
#include<string.h>
main ()
{
    char a[100];
    char b[100];
    sscanf("%s",&a);
    gets(b);
    sprintf("\n%s",a);
}
