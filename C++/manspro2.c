#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    char a[14][100]={"1"};
    char b[100];
    char rep[12];
    char fev[12];
    int k=0;
    int j,l,w,q,r=0,e=0;
    int m=0;
    printf("input your sentence\n");
    gets(b);
    int s=1;
       for(i=0;i<strlen(b);i++)
       {
           if(b[i]!=' ')
           {
               a[r][e]=b[i];
               e++;
           }
           if(b[i]==' ')
           {
               a[r][e]='\0';
               r++;
               e=0;

           }
       }
      printf("input your chosen word to replace\n");
      gets(rep);
      printf("input your favourite word\n");
      gets(fev);
        for(q=0;q<=r;q++)
         {
           if(strcmp(a[q],rep)==0)
             {
                 strcpy(a[q],fev);
             }
         }
       for(l=0;l<=r;l++)
       {
           printf("%s ",a[l]);
       }
}
