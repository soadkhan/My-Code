#include<stdio.h>
main ()
{
    int i,j;
    int n;
    printf("input your chosen number:\n");
    scanf("%d",&n);
    printf("\n\n\n\n\n");
    for(j=1;j<n;j++)
    {
        printf(" ");
    }
    printf("O");
    printf("\n");
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i-1;j++)
        {
            printf(" ");
        }
        printf("O");
        for(j=1;j<=2*i-1;j++)
        {
            printf(" ");
        }
        printf("O");
        printf("\n");
    }
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("O");
        for(j=1;j<=2*n-2*i-3;j++)
        {
            printf(" ");
        }
        printf("O");
        printf("\n");
    }
    for(j=1;j<=n-1;j++)
    {
        printf(" ");
    }
    printf("O");
    printf("\n\n\n\n\n\n");
}
