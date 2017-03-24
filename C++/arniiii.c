#include<stdio.h>
int main()

{
    int a,s=1,s1=1,n,r;
    scanf("%d%d",&n,&r);
    for(a=1;a<=n;a++)
    {
        s*=a;
    }
for(a=1;a<=n-r;a++)
{
    s1*=a;
}
    printf("%d",s/s1);

    return 0;
}


