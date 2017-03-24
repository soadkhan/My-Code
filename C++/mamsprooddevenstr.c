#include<stdio.h>
#include<string.h>
char a[100];
char b[100]={"1"};
char go(char a[])
{
    int i,b1=0;
      for(i=0;i<strlen(a);i++)
      {
          if((i+1)%2==1)
          {
            b[b1]=a[i];
            b1++;
          }
      }
      for(i=0;i<strlen(a);i++)
      {
          if((i+1)%2==0)
          {
            b[b1]=a[i];
            b1++;
          }
      }
      return(b);
}
main ()
{
    int i=0,l=1;
    char c[100];
    printf("please input your word\n");
    gets(a);
    strcpy(c,a);
    printf("\nhere we go......\n");
      while(l!=0)
      {
          go(a);
          puts(b);
          l=strcmp(c,b);
          strcpy(a,b);
          i++;
      }
      printf("we have used the process in %d times\n\n\n\n\n\n",i);
}
