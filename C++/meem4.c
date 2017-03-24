//factors//
#include<stdio.h>
int main()
{
    int i,n,ary[100],k=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
          {
              printf("the factor: %d\n",i);
              ary[k]=i;
              k++;
          }
    }
    for(i=0;i<k;i++)
    {
        printf("%d\n",ary[i]);
    }

    return 0;
}
