#include<stdio.h>
int glo;
void pl()
{
    glo++;
}
int main(){

    scanf("%d",&glo);
    pl();
    pl();
    printf("%d",glo);
}
