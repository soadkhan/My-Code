#include<stdio.h>
#include<string.h>
main ()
{
    int i,l1,l2,out=0;
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2)
    {
        out=-1;
    }
    else
    {
        for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
            {
                out=-1;
                goto m;
            }
        }
    }
    m:printf("\n %d",out);
}
