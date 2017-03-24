#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    int j;
    int n=0;
    int m;
    char wor[100];
    char che[100];
    che[0]=1;
    m=1;
    printf("input your string:\n");
    gets(wor);
    for(i=0; i<strlen(wor); i++)
    {
        for(j=0; j<strlen(wor); j++)
        {
            if(wor[i]==wor[j])
            {
                if(wor[i]==che[j])
                {
                    m=0;
                }
                if(m==1)
                {
                    che[i]=wor[i];
                    n++;
                }
            }
        }
        if(m==1)
        {
            printf("\n %c:%d",wor[i],n);
        }
        m=1;
        n=0;
    }
}
