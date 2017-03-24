#include<stdio.h>
#include<string.h>
char num[100];
char con[100];
char go(char num[])
{
   int i,b=0,k=0,count=1;
   char asci;
       for(i=0;i<strlen(num);i++)
       {
           if(num[i]==num[i+1])
           {
               count++;
               continue;
           }
           asci=count+48;
           con[k]=asci;
           count=1;
           k++;
       }
       con[k]='\0';
       return(con);
}
main ()
{
    int l;
    gets(num);
    l=strlen(num);
      while(l!=1)
      {
          go(num);
          puts(con);
          strcpy(num,con);
          l=strlen(num);
      }
}
