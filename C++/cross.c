#include<stdio.h>
main ()
{
    int i,j,L;
    int n,k;
    printf("to print X how many lines you want?(must be odd and more than 1)\n");
    scanf("%d",&n);
    k=(n-1)/2;
    L=n-2;
    printf("\nhere this is:\n\n\n");
      for(i=1;i<=k;i++)
      {
          for(j=1;j<i;j++)
          {
              printf(" ");
          }
          printf("*");
          for(j=1;j<=L;j++)
          {
              printf(" ");
          }
          printf("*");
          L=L-2;
          printf("\n");
      }
      for(i=1;i<=k;i++)
      {
          printf(" ");
      }
      printf("*");
      L=1;
      printf("\n");
      for(i=1;i<=k;i++)
      {
          for(j=1;j<=k-i;j++)
          {
              printf(" ");
          }
          printf("*");
          for(j=1;j<=L;j++)
          {
              printf(" ");
          }
          printf("*");
          printf("\n");
          L=L+2;
      }
      printf("\n\nwe have printed '*' in %d times",2*n-1);
      printf("\n\n\n\n\n\n\n");
}
