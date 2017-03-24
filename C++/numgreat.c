#include<stdio.h>
main ()
{
    int i,m,n,j=0;
    int max;
    int ar[100];
    printf("how many numbers?\n");
    scanf("%d",&n);
    printf("how many great number you want to print?\n");
    scanf("%d",&m);
    printf("input the numbers:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
    printf("from great to low the%d numbers are:\n",m);
    for(j=0;j<m;j++)
    {
       max=ar[0];
       i=1;
       for(i=1;i<n-j;i++)
       {
           if(max<ar[i])
           {
               ar[i-1]=max;
               max=ar[i];
           }
           if(max>ar[i])
           {
               ar[i-1]=ar[i];
               max=max;
           }
           //if(max==ar[i])
           //{
           //    max=max;
           //    j++;
           //}
       }
       printf("\n%d",max);
    }
      // printf("\n");
      // for(i=0;i<n-1;i++)
      // {
      //     printf(" %d",ar[i]);
       //}
}
