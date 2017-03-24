#include<stdio.h>
#include<string.h>
int pow(int a,int b)
{
    int i;
    int s=1;
      for(i=1;i<=b;i++)
      {
          s=s*a;
      }
      return(s);
}
main ()
{
    int i,j,l,n,s=0;
    int m=0;
    char go[100];
    gets(go);
    l=strlen(go);
      for(i=l-1;i>=0;i--)
      {
          j=go[i]-48;
          n=j*pow(10,m);
          s=s+n;
          m++;
      }
     printf("\n%d",s);
}
