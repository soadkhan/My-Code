#include<stdio.h>
main ()
{
    int r,c;
    int i,j,k,s,m;
    printf("how many rows you want to print CSE (must be odd number to make the shape ofS&E)?:\n");
    scanf("%d",&r);
    printf("how many columns in every alphabet?:\n");
    scanf("%d",&c);
    printf("\n\n\n\n");
      for(i=0;i<1;i++)
      {
          for(j=0;j<c;j++)
          {
              printf("O");
          }
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
      }
      k=((r-1)/2)-1;
      s=2*c-1;
      m=3*c-2;
      for(i=0;i<k;i++)
      {
          printf("\n");
          printf("O");
          for(j=0;j<s;j++)
          {
              printf(" ");
          }
          printf("O");
          for(j=0;j<s;j++)
          {
              printf(" ");
          }
          printf("O");
      }
      printf("\n");
      for(i=0;i<1;i++)
      {
          printf("O");
          for(j=0;j<s;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
      }
      printf("\n");
      for(i=0;i<k;i++)
      {
          printf("O");
          for(j=0;j<m;j++)
          {
              printf(" ");
          }
          printf("O");
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          printf("O");
          printf("\n");
      }
      for(i=0;i<1;i++)
      {
          for(j=0;j<c;j++)
          {
              printf("O");
          }
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
          for(j=0;j<c;j++)
          {
              printf(" ");
          }
          for(j=0;j<c;j++)
          {
              printf("O");
          }
      }
      printf("\n\n\n\n\n\n\n\n\n\n");
}
