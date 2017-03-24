#include<stdio.h>
int main()
{
    int a,b,c,d,min;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    if(min>d)min=d;
    else
    {
        printf("min=%d",min);
    }

}
