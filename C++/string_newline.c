#include<stdio.h>
#include<string.h>
main ()
{
 int i;
 int j=1;
 char str[100];
 printf("please input the line:\n");
 gets(str);
 printf("\n");
   for(i=0;i<strlen(str);i++)
   {
       if(str[i]==' ')
       {
           printf("\n");
           j=j+1;
       }
       else
        {
            if(j%2==1)
            {
                printf("%c",str[i]-32);
                j=j+1;
            }
            else
            {
             printf("%c",str[i]);
            }
        }
   }
}
