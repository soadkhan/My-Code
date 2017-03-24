//sum using array//
#include<stdio.h>
int main()
{
    int i,n,ary[100],sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<100)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ary[i];
    }
    printf("the avg is %f",(float)sum/(float)n);
    }
    else
    {
        printf("input error");
    }
    return 0;
}
