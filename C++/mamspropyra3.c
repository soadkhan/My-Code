#include<stdio.h>
int go(int n)
{
     //int n;
     int out;
     //scanf("%d",&n);
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
     //printf("\n%c",out);
    return(out);
}
main ()
{
    int ser;
    int i,j,k,l;
    scanf("%d",&ser);
    printf("\n");
    k=(ser+1)/2;
    //scanf("%d",&n);
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

