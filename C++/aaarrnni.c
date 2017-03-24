#include<stdio.h>
int main()

{
    int a,s=1,n,r;
    scanf("%d%d",&n,&r);
    for(a=n;a>=r;a--)
    {
        s*=a;
    }


    printf("%d",s);

    return 0;
}



