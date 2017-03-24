#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    int a=0;
    int b=0;
    char wor[100];
    gets(wor);
    for(i=0;i<strlen(wor);i++)
    {
        switch(wor[i])
        {
            case 'a':
            a++;
            if(a%3==0) printf("ant ");
            if(a%3==1) printf("always ");
            if(a%3==2) printf("anger ");
            printf(" %d ",a);
            if(a==3)
            {
                a=0;
            }
            break;
            case 'b':
            b++;
            if(b%3==0) printf("boy ");
            if(b%3==1) printf("boss ");
            if(b%3==2) printf("big ");
            printf(" %d ",b);
            if(b==3)
            {
                b=0;
            }
            break;
        }
    }
}
