#include<stdio.h>
main ()
{
    int n;
    int i,j,k;
    scanf("%d",&n);
       for(i=n;i>=1;i--)
       {
           for(j=i;j>=2;j--)
           {
               printf("  ");
           }
           for(j=n;j>=i;j--)
           {
               printf("%2d",j);
           }
           for(j=i+1;j<=n;j++)
           {
               printf("%2d",j);
           }
           printf("\n");
       }
       for(k=1;k<n;k++)
       {
           for(j=k;j>=1;j--)
           {
               printf("  ");
           }
           for(j=n;j>k;j--)
           {
               printf("%2d",j);
           }
           for(j=k+2;j<=n;j++)
           {
               printf("%2d",j);
           }
           printf("\n");
       }
    }
