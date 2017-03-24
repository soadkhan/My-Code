#include<stdio.h>
#include<string.h>
main ()
{
    int i,j=0;
    char ary[100];
    char ari[100];
    printf("input the first one :\n");
    gets(ary);
    printf("input the second one:\n");
    gets(ari);
       for(i=strlen(ary);i<strlen(ary)+strlen(ari)-1;i++)
       {
           ary[i]=ari[j];
           j++;
       }
       printf("\n the addition of the two line is:\n");
    puts(ary);
}
