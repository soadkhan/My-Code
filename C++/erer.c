#include<stdio.h>
int sq(int num)
{ 
     return num*num;
}

int main()
{
 int a=1,x,y,z;
 
x=sq(++a)+sq(a++)+sq(a++);

printf("%d",x);

return 0;
}

