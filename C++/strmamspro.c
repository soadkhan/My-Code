#include<stdio.h>
#include<string.h>
main ()
{
    int i;
    char a[14][100];//={"1"};
    char b[100];
    char wor[100]={"1"};
    char rep[12];
    char fev[12];
    int k=0;
    int j,l,w,q;
    int m=0;
    printf("input your sentence\n");
    gets(b);
    int s=1;
      for(i=0;i<strlen(b);i++)
      {
         if(b[i]==' ')
         {
             s++;
         }
      }
      for(i=0;i<s;i++)
       {
           for(j=0;b[k]!=' ';j++)
           {
              wor[j]=b[k];
              k++;
           }
           k++;
          strcpy(a[i],wor);
       }
       for(i=0;i<s;i++)
       {
           printf("\n%s",a[i]);
       }
     // printf("input your chosen word to replace\n");
     // gets(rep);
     // printf("input your favourite word\n");
     // gets(fev);
     // w=1;
     //   for(q=0;q<i;q++)
      //   {
      //     strcmp(a[q],rep);
       //    if(strcmp(a[q],rep)==0)
       //    //if(a[q]==rep)
      //       {
       //          strcpy(a[q],fev);
        //         //a[q]=fev;
       //      }
       //      w=1;
      //  }
      // for(l=0;l<i;l++)
      // {
      //     printf("%s ",a[l]);
      // }
}
