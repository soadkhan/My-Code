#include<stdio.h>
int go(int n)
{
     int out;
     if(n==1)
     {
         out=3+48;
     }
     if(n<=5&&n!=1)
     {
         out=2*n-1+48;
     }
     if(n>5)
     {
         out=2*n-1+55;
     }
    return(out);
}
main ()
{
    int ser;
    int i,j,k,l;
    scanf("%d",&ser);
    if(ser%2==0)
    {
        printf("wrong number");
    }
    if(ser>35)
    {
        printf("error number");
    }
    if(ser<=35&&ser%2!=0)
    {
    printf("\n");
    k=(ser+1)/2;
       for(i=k;i>=1;i--)
       {
           for(j=i;j>=2;j--)
           {
               printf("  ");
           }
           for(j=k;j>=i;j--)
           {
               printf("%2c",go(j));
           }
           for(j=i+1;j<=k;j++)
           {
               printf("%2c",go(j));
           }
           printf("\n");
       }
       for(l=1;l<k;l++)
       {
           for(j=l;j>=1;j--)
           {
               printf("  ");
           }
           for(j=k;j>l;j--)
           {
               printf("%2c",go(j));
           }
           for(j=l+2;j<=k;j++)
           {
               printf("%2c",go(j));
           }
           printf("\n");
       }
    }
}


