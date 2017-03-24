#include<stdio.h>
int main()
{
    int a,b,c,case_my,i,s;
    scanf("%d",&case_my);
    for(i=1; i<=case_my; i++)
    {
        scanf("%d",&a);
        for(c=1; c<=a; c++)
        {
            for(b=1; b<= c; b++)
            {
                printf("%d ",b);
            }
            printf("\n");
        }

    }
    return 0;
}

