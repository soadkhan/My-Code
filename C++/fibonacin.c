#include<stdio.h>
main ()
{
    int i,j,a,n,l,k,s=0;
    j=0;
    l=j;
    int ar[100];
    printf("input your number:\n");
    scanf("%d",&n);
    printf("how many numbers?:\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        ar[i]=i;
    }
    for(i=n;i<a;i++)
    {
      for(k=0;k<n;k++)
      {
          s=s+ar[l];
          l++;
      }
      ar[i]=s;
      j++;
      s=0;
      l=j;
    }
    printf("\nthe series is here:\n");
    for(i=0;i<a;i++)
    {
      printf("%d  ",ar[i]);
    }
}
