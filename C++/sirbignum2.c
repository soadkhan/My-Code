#include<stdio.h>
main ()
{
    int k,i,big,loc,temp,temp2,n,f=1;
    int num[100];
    int roll[100];
    printf("how many roll and number you have:\n");
    scanf("%d",&n);
    printf("roll..marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&roll[i],&num[i]);
    }
       for(k=0;k<n;k++)
       {
           big=num[k];
           for(i=k+1;i<n;i++)
           {
               if(num[i]>big)
               {
                   big=num[i];
                   loc=i;
                   f=0;
               }
           }
           if(f==0)
           {
           temp=num[k];
           num[k]=num[loc];
           num[loc]=temp;
           temp2=roll[k];
           roll[k]=roll[loc];
           roll[loc]=temp2;
           }
           f=1;
       }
       printf("new roll..old roll.....marks");
       for(i=0;i<n;i++)
       {
           printf("\n%d          %d         %d",i+1,roll[i],num[i]);
       }
}
