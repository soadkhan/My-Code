#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    char a[100];
    char b[100];
    gets(a);
       for(i=0;i<strlen(a);i++)
       {
         b[i]=a[i];
       }
    puts(b);
}
