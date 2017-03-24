#include<stdio.h>
#include<string.h>
#include<math.h>
main ()
{
   int i;
   int j,l,o,k,r;
   char in[100];
   int s=0;
   gets(in);
   l=strlen(in);
   o=-1;
   for(i=l-1;i>=0;i--)
    {
        o++;
        k=in[i]-48;
        printf("%d",k);
        r=pow(10,o);
        printf(" %d",r);
        j=k*pow(10,o);
        printf("   %d",j);
        s=s+j;
        printf("\n");
     }
     //printf("\n%d",s);
}
