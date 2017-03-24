#include<stdio.h>
int main()

{
    int a,s=0,n;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        s+=(2*a-1)*(2*a+1);
    }

    printf("%d",s);

    return 0;
}

