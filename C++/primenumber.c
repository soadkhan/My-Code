#include<stdio.h>
main ()
{
    int i,j,f=1;
    int  n2,l=0;
    int pri[100000];
    scanf("%d",&n2);
       for(i=2;i<=n2;i++)
       {
           for(j=2;j<i;j++)
           {
               if(i%j==0)
               {
                   f=0;
               }
           }
           if(f==1)
           {
               pri[l]=i;
               l++;
           }
           f=1;
       }
       for(i=0;i<l;i++)
       {
           printf("\n%d  %d",i+1,pri[i]);
       }
       f=0;
       for(i=0;i<l;i++)
       {
           for(j=0;j<=l/2;j++)
           {
               if(pri[i]+pri[j]==n2)
               {
                   f=1;
                   printf("\n%d+%d=%d",pri[i],pri[j],n2);
               }
           }
       }
      if(f==0)
      {
          printf("\nno");
      }
}
