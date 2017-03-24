#include<stdio.h>
#include<string.h>
main()
{
     int i;
     int j;
     int m=1;
     char wor[26][100]={"always ","big ","can ","dangerous ","easy ","fine ","good ","high ","intelligent ","joker ","king ","long ","monkey ","new ","over ","power ","queen ","right ","speed ","toy ","unknown ","victory ","write ","xenon ","yes ","zebra "};//
     char inp[100];
     printf("input the word:\n");
     gets(inp);
       for(i=0;i<26;i++)
       {
           for(j=0;j<26;j++)
           {
               if(inp[i]==wor[j][0])
               {
                   printf("%s",wor[j]);
               }
           }
       }
}
