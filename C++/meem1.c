//array//
//print//
#include<stdio.h>
int main()
{
    int i,n,ary[100];
    printf("enter the nubmer:");
    scanf("%d",&n);
    if(n<100)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("the number: %d\n",ary[i]);
    }
    }
    else
    {
        printf("input error");
    }
    return 0;
}
