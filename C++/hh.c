#include<stdio.h>
int main()
{
    int count;
    count=1;
    line:
    printf("%d\n",count);
    count++;
    if(count<=100)
    {
        goto line;
    }
}
