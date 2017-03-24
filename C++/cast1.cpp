#include<stdio.h>
#include<string.h>
main ()
{
   char a;
   int i,con=0;
   char sen[10000];
   printf("input your desired alhabet:\n");
   a=getchar();
   printf("input your sentence:\n");
   getchar();
   gets(sen);
   for(i=0;i<strlen(sen);i++)
   {
   	 if(a==sen[i])
   	 {
   	 	con++;
   	 }
   }
   printf("\nyou have '%c' in your sentence in %d times",a,con);
   
}
