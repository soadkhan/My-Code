//find the biggest using array//
#include<stdio.h>
int main()
{
    int n,ary[100],i,max;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<100)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ary[i]);
        }
        max=1;
        max=ary[0];
        for(i=1;i<n;i++)
        {
            max=(ary[i]>max)?ary[i]:max;
        }
        printf("the biggest %d",max);
    }
    else
    {
        printf("input error");
    }
    return 0;
}
