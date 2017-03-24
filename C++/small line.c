
#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    char str[100];
    printf("input the line by  capital letters: \n");
    gets(str);
       for(i=0;i<strlen(str);i++)
       {
           if(str[i]==' ')
           {
               str[i]=str[i];
           }
           else
           {
               str[i]=str[i]+32;
           }
       }
       printf("\n");
       puts(str);
}
