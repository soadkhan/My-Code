#include<stdio.h>
#include<string.h>
main ()
{
    char s[100];
    int i,j,m;
    gets(s);
    j=1;
    m=0;
      for(i=0;i<strlen(s);i++)
      {
          if(m==0)
          {
              printf("\nword%d=",j);
              j++;
          }
          m=1;
          printf("%c",s[i]);
          if(s[i]==' ')
          {
            m=0;
          }
      }
}
