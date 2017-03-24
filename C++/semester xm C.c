#include<stdio.h>
void func1(int a,int p,int q[]);
int x,y;
main()
{
    int a=10,b=20,c[3];
    x=100;y=200;
    c[1]=1;
    c[2]=2;
    printf("befor %d %d %d %d %d %d \n",a,b,c[1],c[2],x,y);
    func1(a,b,c);
    printf("after %d %d %d %d %d %d\n",a,b,c[1],c[2],x,y);
}
void func1(int a,int p,int q[])
{
    int x; a=100; p=200;
    q[1]=q[1]+2;
        q[2]=q[2]+2;
        x=102;
        y=202;
}
