#include<stdio.h>
#include<string.h>
main ()
{
    int i,j;
    char   stron[100];
    char   strtw[100];
    char   add[100];
    printf("input the first string\n");
    gets(stron);
    printf("input the second one\n");
    gets(strtw);
    j=0;
       for(i=0;i<strlen(stron);i++)
       {
           add[j]=stron[i];
           j++;
       }
       //j=j-1;
       for(i=0;i<strlen(strtw);i++)
       {
           add[j]=strtw[i];
           j++;
       }
    puts(add);
}
