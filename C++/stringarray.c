#include<stdio.h>
#include<string.h>
main ()
{
    char *ary[5]={"soad","roni","joni","monir"};
    int i,c;
    char asy[100];
    for(c=0;c<=5;c++)
    {
        scanf("%c",&asy[c]);
    }
    char b;
    printf("input a character :\n");
    scanf("%c",&b);
    for(i=0;i<=3;i++)
    {
      if(asy[i]==b)
      {
          printf("%s",ary[i]);
      }
    }
}
